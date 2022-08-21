#include "./List/SimpleLinkedList.h"
#include "./List/DoubleLinkedList.h"
#include "./List/CircularLinkedList.h"
#include "./Stack/ArrayStack.h"
#include "./Stack/LinkedListStack.h"
#include "./Queue/CircularQueue.h"
#include "./Queue/LinkedQueue.h"

#include <iostream>
using namespace std;

void testSimpleLinkedList() {
    int T = 0;

	// SimpleLinkedList 테스트 코드
    cout << "--- SimpleLinkedList 테스트 시작 ---" << "\n";
	SimpleLinkedList<int> sll;

	// 삽입
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << sll.createNode(1) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << sll.createNode(2) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << sll.createNode(3) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << sll.createNode(4) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << sll.appendNode(1, 5) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << sll.appendNode(1, 6) << "\n";
	
	// 카운트
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << sll.getSize() << "\n";

	// 삭제
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << sll.removeNode(2) << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << sll.getSize() << "\n";

	// 조회
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << sll.getNode(0)->data << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << sll.getNode(1)->data << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << sll.getNode(2)->data << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << sll.getNode(3)->data << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << sll.getNode(4)->data << "\n";
	//cout << T++ << ": " << "예상: " << "4" << ", 실제: " << sll.getNode(5)->data << "\n";
	// 1 2 6 5 3 4 
    
    cout << "--- SimpleLinkedList 테스트 종료 ---" << "\n";
}

void testDoubleLinkedList() {
    int T = 0;

	// DoubleLinkedList 테스트 코드
    cout << "--- DoubleLinkedList 테스트 시작 ---" << "\n";
	DoubleLinkedList<int> dll;

	// 삽입
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << dll.createNode(1) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << dll.createNode(2) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << dll.createNode(3) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << dll.createNode(4) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << dll.appendNode(1, 5) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << dll.appendNode(1, 6) << "\n";
	
	// 카운트
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << dll.getSize() << "\n";

	// 삭제
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << dll.removeNode(2) << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << dll.getSize() << "\n";

	// 조회
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << dll.getNode(0)->data << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << dll.getNode(1)->data << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << dll.getNode(2)->data << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << dll.getNode(3)->data << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << dll.getNode(4)->data << "\n";
	//cout << T++ << ": " << "예상: " << "4" << ", 실제: " << dll.getNode(5)->data << "\n";
	// 1 2 6 5 3 4 
    
    cout << "--- DoubleLinkedList 테스트 종료 ---" << "\n";
}

void testCircularLinkedList() {
    int T = 0;

	// CircularLinkedList 테스트 코드
    cout << "--- CircularLinkedList 테스트 시작 ---" << "\n";
	CircularLinkedList<int> cll;

	// 삽입
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << cll.createNode(1) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << cll.createNode(2) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << cll.createNode(3) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << cll.createNode(4) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << cll.appendNode(1, 5) << "\n";
	cout << T++ << ": " << "예상: " << "0x1234" << ", 실제: " << cll.appendNode(1, 6) << "\n";
	
	// 카운트
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << cll.getSize() << "\n";

	// 삭제
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << cll.removeNode(2) << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << cll.getSize() << "\n";

	// 조회
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << cll.getNode(0)->data << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << cll.getNode(1)->data << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << cll.getNode(2)->data << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << cll.getNode(3)->data << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << cll.getNode(4)->data << "\n";
	//cout << T++ << ": " << "예상: " << "4" << ", 실제: " << cll.getNode(5)->data << "\n";
	// 1 2 6 5 3 4 
    
    cout << "--- CircularLinkedList 테스트 종료 ---" << "\n";
}

void testArrayStack() {
    int T = 0;

	// ArrayStack 테스트 코드
    cout << "--- ArrayStack 테스트 시작 ---" << "\n";
	ArrayStack<int> as = ArrayStack<int>(3);

	// 빈 상태
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.isEmpty() << "\n";

	// 할당량
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << as.getCapacity() << "\n";

	// 삽입
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.push(1) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.push(2) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.push(3) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.push(4) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.push(5) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.push(6) << "\n";

	// 할당량
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << as.getCapacity() << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << as.getSize() << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "0" << ", 실제: " << as.isEmpty() << "\n";

	// 조회
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << as.pop() << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << as.pop() << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << as.pop() << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << as.pop() << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << as.pop() << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.pop() << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << as.isEmpty() << "\n";
    
    cout << "--- ArrayStack 테스트 종료 ---" << "\n";
}

void testLinkedListStack() {
    int T = 0;

	// LinkedListStack 테스트 코드
    cout << "--- LinkedListStack 테스트 시작 ---" << "\n";
	LinkedListStack<int> lls;

	// 빈 상태
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.isEmpty() << "\n";

	// 삽입
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.push(1) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.push(2) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.push(3) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.push(4) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.push(5) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.push(6) << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << lls.getSize() << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "0" << ", 실제: " << lls.isEmpty() << "\n";

	// 조회
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << lls.pop()->data << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << lls.pop()->data << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << lls.pop()->data << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << lls.pop()->data << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << lls.pop()->data << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.pop()->data << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lls.isEmpty() << "\n";
    
    cout << "--- LinkedListStack 테스트 종료 ---" << "\n";
}

void testCircularQueue() {
    int T = 0;

	// CircularQueue 테스트 코드
    cout << "--- CircularQueue 테스트 시작 ---" << "\n";
	CircularQueue<int> cq = CircularQueue<int>(3);

	// 빈 상태
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.isEmpty() << "\n";

	// 찬 상태
	cout << T++ << ": " << "예상: " << "false" << ", 실제: " << cq.isFull() << "\n";

	// 삽입
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.enqueue(1) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.enqueue(2) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.enqueue(3) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << cq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << cq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.enqueue(4) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.enqueue(5) << "\n";
	cout << T++ << ": " << "예상: " << "false" << ", 실제: " << cq.enqueue(6) << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << cq.getSize() << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "false" << ", 실제: " << cq.isEmpty() << "\n";

	// 찬 상태
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.isFull() << "\n";

	// 조회
	//cout << T++ << ": " << "예상: " << "1" << ", 실제: " << cq.dequeue() << "\n";
	//cout << T++ << ": " << "예상: " << "2" << ", 실제: " << cq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << cq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << cq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << cq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "NULL" << ", 실제: " << cq.dequeue() << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << cq.isEmpty() << "\n";

    cout << "--- CircularQueue 테스트 종료 ---" << "\n";
}

void testLinkedQueue() {
    int T = 0;

	// LinkedQueue 테스트 코드
    cout << "--- LinkedQueue 테스트 시작 ---" << "\n";
	LinkedQueue<int> lq;

	// 빈 상태
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.isEmpty() << "\n";

	// 삽입
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.enqueue(1) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.enqueue(2) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.enqueue(3) << "\n";
	cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lq.dequeue()->data << "\n";
	cout << T++ << ": " << "예상: " << "2" << ", 실제: " << lq.dequeue()->data << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.enqueue(4) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.enqueue(5) << "\n";
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.enqueue(6) << "\n";

	// 카운트
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << lq.getSize() << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "false" << ", 실제: " << lq.isEmpty() << "\n";

	// 조회
	//cout << T++ << ": " << "예상: " << "1" << ", 실제: " << lq.dequeue() << "\n";
	//cout << T++ << ": " << "예상: " << "2" << ", 실제: " << lq.dequeue() << "\n";
	cout << T++ << ": " << "예상: " << "3" << ", 실제: " << lq.dequeue()->data << "\n";
	cout << T++ << ": " << "예상: " << "4" << ", 실제: " << lq.dequeue()->data << "\n";
	cout << T++ << ": " << "예상: " << "5" << ", 실제: " << lq.dequeue()->data << "\n";
	cout << T++ << ": " << "예상: " << "6" << ", 실제: " << lq.dequeue()->data << "\n";

	// 빈 상태
	cout << T++ << ": " << "예상: " << "true" << ", 실제: " << lq.isEmpty() << "\n";

    cout << "--- LinkedQueue 테스트 종료 ---" << "\n";
}