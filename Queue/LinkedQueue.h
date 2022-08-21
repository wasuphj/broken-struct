#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <iostream>

template <typename T>
class LinkedQueue {
    typedef struct _Node {
        T data;
        struct _Node *prev;
        struct _Node *next;
    }Node;

private:
    Node* front = NULL;
    int size = 0;

public:
	int enqueue(T);
	Node* dequeue();
    int isEmpty();
	int getSize();
};

#include "LinkedQueue.hpp"

#endif