#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <iostream>
#include <cstring>

template <typename T>
class ArrayStack {
private:
	int top = -1;
    T* data;
    int capacity = 0;

public:
    ArrayStack(int);
	int push(T);
	T pop();
    T peek();
    int isEmpty();
	int getSize();
    int getCapacity();
};

#include "ArrayStack.hpp"

#endif