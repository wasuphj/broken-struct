template <typename T>
CircularQueue<T>::CircularQueue(int _capacity) {
    capacity = _capacity;
    data = new T[capacity + 1];
}

template <typename T>
int CircularQueue<T>::enqueue(T newData) {
    if (isFull()) return 0;

    rear %= capacity + 1;
    data[rear++] = newData;

    return 1;
}

template <typename T>
T CircularQueue<T>::dequeue() {
    if (isEmpty()) return 0;

    front %= capacity + 1;

    return data[front++];
}

template <typename T>
int CircularQueue<T>::isEmpty() {
    return front == rear;
}

template <typename T>
int CircularQueue<T>::isFull() {
    return (rear + 1) % (capacity + 1) == front;
}

template <typename T>
int CircularQueue<T>::getSize() {
    return rear - front + (rear - front < 0 ? capacity + 1 : 0);
}

template <typename T>
int CircularQueue<T>::getCapacity() {
    return capacity;
}