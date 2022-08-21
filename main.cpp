#include "test.h"
using namespace std;

int main() {
	testSimpleLinkedList();
	testDoubleLinkedList();
	testCircularLinkedList();
	
	testArrayStack();
	testLinkedListStack();

	testCircularQueue();
	testLinkedQueue();

	return 0;
}