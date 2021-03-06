
#include "J118/Thread.h"


//TODO: Fix crash when deleting right after creation.
namespace J118
{
namespace Concurrency
{


	
Thread::Thread()
{
	thread_handle = NULL;
	strcpy(thread_name,"Uknown");
	running = false;
	thread_mutex = new std::mutex();
}

Thread::Thread(const char* n)\
{
	thread_handle = NULL;
	strcpy(thread_name,n);
	running = false;
	thread_mutex = new std::mutex();
}
	
Thread::~Thread()
{
	//thread_mutex->lock();
	if(thread_handle != NULL)
	{
		//thread_mutex->unlock();
		printf("ID001\n");
		join();
		printf("ID002\n");
		//thread_handle->detach();
		delete thread_handle;
		thread_handle = NULL;
	}
	else
	{
		//thread_mutex->unlock();
	}
		
	
	SAFE_DELETE(thread_mutex);
}
	
void Thread::runProxy(void* me)
{
	
	
	Thread* callee = (Thread*)me;
	callee->running = true;
	//callee->thread_mutex->unlock(); // Unlocking after thread is started [ID001]
	callee->run();
	//printf("POINT %x\n",((void*)callee->thread_handle));
	//delete callee->thread_handle;
	//callee->thread_handle = NULL;
	callee->running = false;
}
	
	
void Thread::start()
{
	if(thread_handle != NULL)
	{
		//throw ThreadRunningException();
		if(running)
		{
			throw ThreadRunningException();
			return;
		}
		else
		{
			join();
			//thread_handle->detach();
			delete thread_handle;
			thread_handle = NULL;
		}
	}
	else
	{
		//thread_mutex->lock(); //Locking to start the thread [ID001]
		thread_handle = new std::thread(runProxy,this);
	}
	
	
	
}
	
void Thread::join()
{
	//int result = thread_mutex->try_lock();
	//printf("Try lock returned %d\n", result);
	//pritnf("\n\n%d\n\n",(unsigned long long int)((void*)(thread_mutex)));
	thread_mutex->lock(); //----------------------------------------CRASHES HERE------------------------------------------------
	if(thread_handle != NULL && thread_handle->joinable())
	{
		thread_handle->join();
		delete thread_handle;
		thread_handle = NULL;
		thread_mutex->unlock();
	}
	else
	{
		thread_mutex->unlock();
	}
	
}

const char* ThreadRunningException::what() const throw()
{
	return "Instance of thread already running";
}

void Thread::sleep(double time)
{
	uint64_t sleep_time = (uint64_t)(time*1000000000.0);
	std::this_thread::sleep_for(std::chrono::nanoseconds(sleep_time));
}

}
}/* namespace J118 */