#pragma once

//Universal Includes
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <exception>
#include <thread>
#include <mutex>

//J118 Library Includ1es
#include <J118/UtilityMacros.h>

//OS Specific Includes
#ifdef __linux__
#include <pthread.h>
#elif _WIN32

#else
#error "Cant determain type system, Threads failed to build!"
#endif

#define J118_THREAD_NAME_LENGTH 32
namespace J118
{

class ThreadRunningException: public std::exception
{
public:
	virtual const char* what() const throw();
};
	

class Thread
{
	
	
private:
	std::thread* thread_handle;
	std::mutex* thread_mutex;
	
	
protected:
	char thread_name[J118_THREAD_NAME_LENGTH];
	bool running;
	virtual void run() = 0;
	static void runProxy(void* me);
public:
	virtual ~Thread();
	Thread();
	Thread(const char* n);
	void start();
	virtual void join();
	static void sleep(double time);
	
	
};
} /*namespace J118 */

