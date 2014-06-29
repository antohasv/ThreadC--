#include "queue.h"


template<class T>
void BlockingQueue<T>::push(T element) {
	_lock.lock();
	_queue.push(element);
	_lock.unlock();
}
	
template< class T >
T BlockingQueue<T>::pop() {
	T element = null;

	_lock.lock();
	element = _queue.pop();
	_lock.unlock();
	return element;
}


template< class T >
bool BlockingQueue<T>::isEmpty() 
{
	return _queue.size == 0;
}