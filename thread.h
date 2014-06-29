#include <thread>
#include "queue.h"

#define TICK_TIME 5

class Thread
{
	BlockingQueue<char *> *queue;
public:
	Thread(BlockingQueue<char *> *blocking_queue);
	void start();
	void performTask();
	void algorithm();
};