#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include <iostream>

template <typename T>
class CircularQueue {
private:
	int front = 0;
	int rear = 0;
    T* data;
    int capacity = 0;

public:
    CircularQueue(int);
	int enqueue(T);
	T dequeue();
    int isEmpty();
    int isFull();
	int getSize();
    int getCapacity();
};

#include "CircularQueue.hpp"

#endif