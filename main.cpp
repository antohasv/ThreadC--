#include <iostream>
#include <thread>
#include "queue.h"

using namespace std;

void initializeThread(BlockingQueue<char *> *blocking_queue) 
{

}

int main(int args, char* argv[]) 
{
	char data[100];
	
	BlockingQueue<char *> *blocking_queue = new BlockingQueue<char *>();
	initializeThread(blocking_queue);

	while (true) {
		std::cin >> data;
		blocking_queue -> push(data);
	}
	return 1;
}