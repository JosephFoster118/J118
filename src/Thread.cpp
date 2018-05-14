
#include "J118/Thread.h"


//TODO: Fix crash when deleting right after creation.
namespace J118
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
	printf("Deleting thread\n");
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
	
	printf("In thread...\n");
	
	Thread* callee = (Thread*)me;
	printf("Casted\n");
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
	printf("SSSSS\n");
	if(thread_handle != NULL)
	{
		//throw ThreadRunningException();
		if(running)
		{
			printf("Oh no...\n");
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
		printf("Starting\n");
		//thread_mutex->lock(); //Locking to start the thread [ID001]
		thread_handle = new std::thread(runProxy,this);
		printf("started\n");
	}
	
	
	
}
	
void Thread::join()
{
	//int result = thread_mutex->try_lock();
	//printf("Try lock returned %d\n", result);
	//pritnf("\n\n%d\n\n",(unsigned long long int)((void*)(thread_mutex)));
	thread_mutex->lock(); //----------------------------------------CRASHES HERE------------------------------------------------
	printf("LOCKED\n");
	if(thread_handle != NULL && thread_handle->joinable())
	{
		printf("ID003\n");
		thread_handle->join();
		printf("ID004\n");
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


	
}/* namespace J118 */