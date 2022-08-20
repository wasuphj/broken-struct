template <typename T>
typename CircularLinkedList<T>::Node* CircularLinkedList<T>::createNode(T data) {
    Node* newNode = new Node { data };
    newNode->prev = newNode;
    newNode->next = newNode;
    size++;

    if (head == NULL) return head = newNode;
    
    Node* lastNode = head->prev;
    lastNode->next = newNode;
    newNode->prev = lastNode;
    
    newNode->next = head;
    head->prev = newNode;

    return newNode;
}

template <typename T>
typename CircularLinkedList<T>::Node* CircularLinkedList<T>::getNode(int idx) {
    if (!head) return NULL;
    if (idx < 0) return NULL;
    if (idx >= size) return NULL;

    Node* targetNode = head;

    if (idx <= size / 2) {
        for (int i = 0; i < idx; i++) {
            if (!targetNode->next) return NULL;
            targetNode = targetNode->next;
        }
    } else {
        for (int i = 0; i < size - idx; i++) {
            if (!targetNode->prev) return NULL;
            targetNode = targetNode->prev;
        }
    }
    
    return targetNode;
}

template <typename T>
typename CircularLinkedList<T>::Node* CircularLinkedList<T>::appendNode(int idx, T data) {
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
int CircularLinkedList<T>::removeNode(int idx) {
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
int CircularLinkedList<T>::getSize() {
    return size;
}