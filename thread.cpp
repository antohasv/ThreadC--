#include "thread.h"

Thread::Thread(BlockingQueue<char *> *blocking_queue) 
{
	this->queue = blocking_queue;
}

void Thread::start() 
{
	thread thread1(Thread::performTask);
}

void Thread::performTask()
{
	char *data = "";
	while (true) {
		while ((data = queue->pop()) == NULL)
		{
			this_thread::sleep_for(std::chrono::seconds(TICK_TIME));
		}
		algorithm();
	}
}

void Thread::algorithm()
{
	//Your implementation
}