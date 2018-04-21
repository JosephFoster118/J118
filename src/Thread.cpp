
#include "J118/Thread.h"

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
}
	
Thread::~Thread()
{
	if(thread_handle != NULL)
	{
		join();
		//thread_handle->detach();
		delete thread_handle;
		thread_handle = NULL;
	}
}
	
void Thread::runProxy(void* me)
{
	
	printf("In thread...\n");
	Thread* callee = (Thread*)me;
	printf("Casted\n");
	callee->running = true;
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
	thread_handle = new std::thread(runProxy,this);
	
	
}
	
void Thread::join()
{
	if(thread_handle != NULL && thread_handle->joinable())
	{
		thread_handle->join();
	}
}

const char* ThreadRunningException::what() const throw()
{
	return "Instance of thread already running";
}


	
}/* namespace J118 */