CC=g++
CFLAGS=-Wall
OBJS=test.o main.o
TARGET=a.out
LIBS=$(LIB_LIST) $(LIB_STACK) $(LIB_QUEUE)

LIB_LIST=$(LIB_SIMPLE_LINKED_LIST) $(LIB_DOUBLE_LINKED_LIST) $(LIB_CIRCULAR_LINKED_LIST)
LIB_SIMPLE_LINKED_LIST=./List/SimpleLinkedList.h ./List/SimpleLinkedList.hpp
LIB_DOUBLE_LINKED_LIST=./List/DoubleLinkedList.h ./List/DoubleLinkedList.hpp
LIB_CIRCULAR_LINKED_LIST=./List/CircularLinkedList.h ./List/CircularLinkedList.hpp

LIB_STACK=$(LIB_ARRAY_STACK) $(LIB_LINKED_LIST_STACK)
LIB_ARRAY_STACK=./Stack/ArrayStack.h ./Stack/ArrayStack.hpp
LIB_LINKED_LIST_STACK=./Stack/LinkedListStack.h ./Stack/LinkedListStack.hpp

LIB_QUEUE=$(LIB_CIRCULAR_QUEUE) $(LIB_LINKED_QUEUE)
LIB_CIRCULAR_QUEUE=./Queue/CircularQueue.h ./Queue/CircularQueue.hpp
LIB_LINKED_QUEUE=./Queue/LinkedQueue.h ./Queue/LinkedQueue.hpp

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

test:
	./$(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(OBJS)

main.o: $(LIBS) test.h main.cpp
test.o: test.cpp