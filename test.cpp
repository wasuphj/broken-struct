#include "./List/SimpleLinkedList.h"

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