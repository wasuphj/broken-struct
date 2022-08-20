#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <iostream>

template <typename T>
class DoubleLinkedList {
	typedef struct _Node {
		T data;
        struct _Node* prev;
		struct _Node* next;
	} Node;

private:
	Node* head = NULL;
	int size = 0;

public:
	Node* createNode(T data);
	Node* getNode(int idx);
	Node* appendNode(int idx, T data);
	int removeNode(int idx);
	int getSize();
};

#include "DoubleLinkedList.hpp"

#endif