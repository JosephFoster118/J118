
#include "J118/Thread.h"


//TODO: Fix crash when deleting right after creation.
namespace J118
{
	
Thread::Thread()
{
	thread_handle = NULL;
	strcpy(thread_name,"Uknown");
	running = false;
}

Thread::Thread(const char* n)\
{
	thread_handle = NULL;
	strcpy(thread_name,n);
	running = false;
	data_lock = new std::mutex();
}
	
Thread::~Thread()
{
	printf("Deleting thread\n");
	//data_lock->lock();
	if(thread_handle != NULL)
	{
		//data_lock->unlock();
		printf("ID001\n");
		join();
		printf("ID002\n");
		//thread_handle->detach();
		delete thread_handle;
		thread_handle = NULL;
	}
	else
	{
		data_lock->unlock();
	}
		
	
	SAFE_DELETE(data_lock);
}
	
void Thread::runProxy(void* me)
{
	
	printf("In thread...\n");
	
	Thread* callee = (Thread*)me;
	printf("Casted\n");
	callee->running = true;
	callee->data_lock->unlock(); // Unlocking after thread is started [ID001]
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
		data_lock->lock(); //Locking to start the thread [ID001]
		thread_handle = new std::thread(runProxy,this);
		printf("started\n");
	}
	
	
	
}
	
void Thread::join()
{
	data_lock->lock();
	if(thread_handle != NULL && thread_handle->joinable())
	{
		printf("ID003\n");
		thread_handle->join();
		printf("ID004\n");
		delete thread_handle;
		thread_handle = NULL;
		data_lock->unlock();
	}
	else
	{
		data_lock->unlock();
	}
	
}

const char* ThreadRunningException::what() const throw()
{
	return "Instance of thread already running";
}


	
}/* namespace J118 */