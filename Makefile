CC=g++
CFLAGS=-Wall
OBJS=test.o main.o
TARGET=a.out
LIBS=$(LIB_LIST)

LIB_LIST=$(LIB_SIMPLE_LINKED_LIST)
LIB_SIMPLE_LINKED_LIST=./List/SimpleLinkedList.h ./List/SimpleLinkedList.hpp

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