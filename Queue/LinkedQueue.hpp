template <typename T>
int LinkedQueue<T>::enqueue(T newData) {
    Node* newNode = new Node { newData, front };
    size++;

    if (isEmpty()) {
        front = newNode;
        return 1;
    }
    
    Node* lastNode = front;
    while (lastNode->next) lastNode = lastNode->next;
    lastNode->next = newNode;

    return 1;
}

template <typename T>
typename LinkedQueue<T>::Node* LinkedQueue<T>::dequeue() {
    if (isEmpty()) return NULL;

    Node* ret = front;
    front = front->next;

    ret->prev = NULL;
    ret->next = NULL;
    
    size--;

    return ret;
}

template <typename T>
int LinkedQueue<T>::isEmpty() {
    return front == NULL;
}

template <typename T>
int LinkedQueue<T>::getSize() {
    return size;
}