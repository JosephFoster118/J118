#include <J118/PeriodicThread.h>


namespace J118
{

using namespace std::chrono;
PeriodicThread::PeriodicThread(double period) : Thread("Unknown Periodic")
{
	thread_period = period;
	running = false;
	periodic_data_lock = new std::mutex();
}

PeriodicThread::PeriodicThread(double period, const char* n) : Thread(n)
{
	thread_period = period;
	running = false;
	periodic_data_lock = new std::mutex();
}

PeriodicThread::~PeriodicThread()
{
	SAFE_DELETE(periodic_data_lock);
}

void PeriodicThread::run()
{
	
	uint64_t delta_time = (uint64_t)(thread_period*1000000000.0);
	periodic_data_lock->lock();//----------LOCK----------
	running = true;
	while(running)
	{
		periodic_data_lock->unlock();//----------UNLOCK----------
		auto start = steady_clock::now();
		runPeriodic();
		auto end = steady_clock::now();
		int64_t sleep_time = delta_time - duration_cast<nanoseconds>(end-start).count();
		if(sleep_time < 0)
		{
			printf("WARNING: PeriodicThread [%s] exceeded period\n", thread_name);
		}
		else
		{
			std::this_thread::sleep_for(std::chrono::nanoseconds(sleep_time));
		}
		
		periodic_data_lock->lock();//----------LOCK----------
	}
	periodic_data_lock->unlock();//----------UNLOCK----------
}

void PeriodicThread::join()
{
	periodic_data_lock->lock();
	if(running)
	{
		running = false;
	}
	periodic_data_lock->unlock();
	Thread::join();
	
	
}
	
}


