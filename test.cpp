#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <exception>
#include <random>
#include "J118/ArgParse.h"
#include "J118/Vector2D.h"
#include "J118/Thread.h"

using namespace J118;
using namespace J118::Utilities;

class TestThread : public Thread
{
private:
public:
	TestThread(const char* n);
	void run();
};

TestThread::TestThread(const char* n): Thread(n)
{
	
}

void TestThread::run()
{
	std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 2000.0);

	for(long long int i = 0; i < 1000l; i ++)
	{
		printf("%-16s says %-4d\n", thread_name, i);
		usleep((int)dist(mt));
	}
}

int main(int argc,const char** argv)
{
	printf("Test\n");
	ArgParse arg_parse;
	arg_parse.addStatic('t', "test", "A test argument");
	
	arg_parse.parseArgs(argc, argv);
	printf("Test is: %d\n", arg_parse.getStatic('t'));
	
	Vector2D test_v(2.5,3.2);
	test_v = test_v*4.0;
	printf("test_v <%2.2f,%2.2f>\n", test_v.getX(), test_v.getY());
	
	/*
	printf("Creating thread\n");
	TestThread* t_thread = new TestThread();
	TestThread* t_thread_2 = new TestThread();
	printf("Starting thread\n");
	t_thread->start();
	
	t_thread->join();
	t_thread->start();
	t_thread_2->start();
	t_thread->join();
	t_thread_2->join();
	//delete t_thread;
	delete t_thread_2;
	printf("Exception test...\n");
	try
	{
		t_thread->start();
		usleep(500000);
		t_thread->start();
	}
	catch(J118::ThreadRunningException ex)
	{
		printf("Failed with message: %s\n",ex.what());
	}
	t_thread->join();
	delete t_thread;
	*/
	printf("Tons of threads test...\n");
	sleep(2);
	TestThread* threads[10000];
	for(int i = 0; i < 10000; i++)
	{
		char n_buffer[32];
		sprintf(n_buffer, "Test %d", i);
		threads[i] = new TestThread(n_buffer);
		threads[i]->start();
	}
	sleep(1);
	
	for(int i = 0; i < 10000; i++)
	{
		delete threads[i];
	}
	
	
	
	
	return 0;
}


