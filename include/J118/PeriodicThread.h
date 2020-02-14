#pragma once
#include <chrono>
#include <J118/Thread.h>


namespace J118
{
namespace Concurrency
{
class PeriodicThread : public Thread
{
private:
	double thread_period;
	std::mutex* periodic_data_lock;
	bool running;
public:
	PeriodicThread(double period);
	PeriodicThread(double period, const char* n);
	void run();
	void join();
	virtual void runPeriodic() = 0;
	
	virtual ~PeriodicThread();

};

}
}// J118 Namespace
