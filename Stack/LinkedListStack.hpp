template <typename T>
int LinkedListStack<T>::push(T newData) {
    Node* newNode = new Node { newData, top };
    
    if (top) top->next = newNode;

    top = newNode;
    size++;

    return 1;
}

template <typename T>
typename LinkedListStack<T>::Node* LinkedListStack<T>::pop() {
    if (top == NULL) return NULL;
    
    Node* ret = top;

    top = top->prev;
    size--;

    return ret;
}

template <typename T>
typename LinkedListStack<T>::Node* LinkedListStack<T>::peek() {
    return top;
}

template <typename T>
int LinkedListStack<T>::isEmpty() {
    return top == NULL;
}

template <typename T>
int LinkedListStack<T>::getSize() {
    return size;
}