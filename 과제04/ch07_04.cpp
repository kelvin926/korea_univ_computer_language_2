#include <iostream>
using namespace std;
class SortedArray {
    int size;
    int *p;
    void sort();
public: 
    SortedArray();
    SortedArray(SortedArray& src);
    SortedArray(int p[], int size);
    ~SortedArray();
    SortedArray operator + (SortedArray& op2);
    SortedArray& operator = (const SortedArray& op2);
    void show();
};
void SortedArray::sort() {
    for (int i = 0; i < size-1; ++i) {
        for (int j = 1; j < size - i; ++j) {
            if (p[j - 1] > p[j]) {
                int temp = p[j - 1];
                p[j - 1] = p[j];
                p[j] = temp;
            }
        }
    }
}
SortedArray::SortedArray() {
    p = NULL; size = 0;
}
SortedArray::~SortedArray() {
    if (p)
        delete[] p;
}
SortedArray::SortedArray(int p[], int size) {
    this->size = size;
    this->p = new int[size];
    for (int i = 0; i < size; ++i) {
        this->p[i] = p[i];
    }
}
SortedArray::SortedArray(SortedArray& src) {
    this->size = src.size;
    this->p = new int[src.size];
    for (int i = 0; i < src.size; ++i)
        this->p[i] = src.p[i];
}
SortedArray SortedArray::operator+(SortedArray& op2) {
    SortedArray tmp;
    tmp.p = new int[this->size+op2.size];
    tmp.size = this->size + op2.size;
    for (int i = 0; i < this->size; ++i)
        tmp.p[i] = this->p[i];
    for (int i = 0; i < op2.size; ++i)
        tmp.p[i+ this->size] = op2.p[i];
    return tmp;
}
SortedArray& SortedArray::operator=(const SortedArray& op2) {
    delete[] this->p;
    this->p = new int[op2.size];
    this->size = op2.size;
    for (int i = 0; i < op2.size; ++i)
        this->p[i] = op2.p[i];
    return *this;
}
void SortedArray::show() {
    this->sort();
    cout << "배열 출력 : ";
    for (int i = 0; i < this->size; ++i)
        cout << p[i] << ' ' ;
    cout << endl;
}
int main() {
    int n[] = { 2,20,6 };
    int m[] = { 10,7,8,30 };
    SortedArray a(n, 3), b(m, 4), c;
    c = a + b;
    a.show();
    b.show();
    c.show();
}