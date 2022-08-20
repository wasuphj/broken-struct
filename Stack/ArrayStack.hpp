template <typename T>
ArrayStack<T>::ArrayStack(int _capacity) {
    capacity = _capacity;
    data = new T[capacity];
}

template <typename T>
int ArrayStack<T>::push(T newData) {
    if (++top >= capacity) {
        T* doubledData = new T[capacity * 2];
        memcpy(doubledData, data, sizeof(T) * capacity);
        capacity *= 2;
        data = doubledData;
    }
    data[top] = newData;
    return 1;
}

template <typename T>
T ArrayStack<T>::pop() {
    if (top < 0) return NULL;
    return data[top--];
}

template <typename T>
T ArrayStack<T>::peek() {
    if (top < 0) return NULL;
    return data[top];
}

template <typename T>
int ArrayStack<T>::isEmpty() {
    return top == -1;
}

template <typename T>
int ArrayStack<T>::getSize() {
    return top + 1;
}

template <typename T>
int ArrayStack<T>::getCapacity() {
    return capacity;
}