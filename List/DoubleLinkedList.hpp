template <typename T>
typename DoubleLinkedList<T>::Node* DoubleLinkedList<T>::createNode(T data) {
    Node* newNode = new Node { data };
    size++;

    if (head == NULL) return head = newNode;
    
    Node* lastNode = head;
    while (lastNode->next) lastNode = lastNode->next;
    lastNode->next = newNode;
    newNode->prev = lastNode;

    return newNode;
}

template <typename T>
typename DoubleLinkedList<T>::Node* DoubleLinkedList<T>::getNode(int idx) {
    if (!head) return NULL;
    if (idx < 0) return NULL;
    if (idx >= size) return NULL;

    Node* targetNode = head;

    for (int i = 0; i < idx; i++) {
        if (!targetNode->next) return NULL;
        targetNode = targetNode->next;
    }

    return targetNode;
}

template <typename T>
typename DoubleLinkedList<T>::Node* DoubleLinkedList<T>::appendNode(int idx, T data) {
    Node* prevNode = getNode(idx);
    if (!prevNode) return NULL;

    Node* nextNode = prevNode->next;

    Node* newNode = new Node { data, prevNode, nextNode };
    prevNode->next = newNode;
    if (nextNode) nextNode->prev = newNode;

    size++;

    return newNode;
}

template <typename T>
int DoubleLinkedList<T>::removeNode(int idx) {
    if (idx < 0) return 0;
    if (idx >= size) return 0;

    Node* targetNode = getNode(idx);

    Node* prevNode = targetNode->prev;
    Node* nextNode = targetNode->next;

    if (prevNode) prevNode->next = targetNode->next;
    if (nextNode) nextNode->prev = targetNode->prev;

    delete targetNode;
    size--;

    return 1;
}

template <typename T>
int DoubleLinkedList<T>::getSize() {
    return size;
}