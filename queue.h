#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex
#include <queue>

using namespace std;

template <typename T>
class BlockingQueue {
	mutex _lock;
	queue<T> _queue;

public:
	void push(T element);
	T pop();
	bool isEmpty();
};