CC=g++
CFLAGS=-Wall
OBJS=test.o main.o
TARGET=a.out
LIBS=$(LIB_LIST)

LIB_LIST=$(LIB_SIMPLE_LINKED_LIST) $(LIB_DOUBLE_LINKED_LIST) $(LIB_CIRCULAR_LINKED_LIST)
LIB_SIMPLE_LINKED_LIST=./List/SimpleLinkedList.h ./List/SimpleLinkedList.hpp
LIB_DOUBLE_LINKED_LIST=./List/DoubleLinkedList.h ./List/DoubleLinkedList.hpp
LIB_CIRCULAR_LINKED_LIST=./List/CircularLinkedList.h ./List/CircularLinkedList.hpp

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