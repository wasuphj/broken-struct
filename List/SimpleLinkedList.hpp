template <typename T>
typename SimpleLinkedList<T>::Node* SimpleLinkedList<T>::createNode(T data) {
    Node* newNode = new Node { data };
    size++;

    if (head == NULL) return head = newNode;
    
    Node* lastNode = head;
    while (lastNode->next) lastNode = lastNode->next;
    lastNode->next = newNode;

    return newNode;
}

template <typename T>
typename SimpleLinkedList<T>::Node* SimpleLinkedList<T>::getNode(int idx) {
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
typename SimpleLinkedList<T>::Node* SimpleLinkedList<T>::appendNode(int idx, T data) {
    Node* prevNode = getNode(idx);
    if (!prevNode) return NULL;

    Node* newNode = new Node { data, prevNode->next };
    prevNode->next = newNode;

    size++;

    return newNode;
}

template <typename T>
int SimpleLinkedList<T>::removeNode(int idx) {
    if (idx < 0) return 0;

    Node* targetNode = head;
    
    Node* prevNode = getNode(idx - 1);
    if (prevNode) {
        targetNode = prevNode->next;
        prevNode->next = targetNode->next;
    }

    delete targetNode;
    size--;

    return 1;
}

template <typename T>
int SimpleLinkedList<T>::getSize() {
    return size;
}