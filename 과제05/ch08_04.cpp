#include <iostream>
using namespace std;
class BaseArray {
private:
    int capacity;
    int *mem;
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};
class MyQueue : protected BaseArray {
    int front;
    int rear;
public:
    MyQueue(int capacity) : BaseArray(capacity) { front = rear = 0; }
    void enqueue(int n) {
        rear = (rear + 1) % getCapacity();
        put(rear, n);
    }
    int dequeue() {
        front = (front + 1) % getCapacity();
        return get(front);
    }
    int capacity() { return getCapacity(); }
    int length() { return (rear - front) % getCapacity(); }
};
int main() { 
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' ';
    }
    cout << endl << "큐의 현재크기 : " << mQ.length() << endl;
}