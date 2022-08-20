#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

#include <iostream>

template <typename T>
class LinkedListStack {
	typedef struct _Node {
		T data;
		struct _Node* prev;
		struct _Node* next;
	} Node;

private:
	Node* top = NULL;
    int size = 0;

public:
	int push(T);
	Node* pop();
    Node* peek();
    int isEmpty();
	int getSize();
};

#include "LinkedListStack.hpp"

#endif