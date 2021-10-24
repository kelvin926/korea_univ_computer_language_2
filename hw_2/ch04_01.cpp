/*
2021271424 장현서
과제2_1
*/

#include<iostream>

using namespace std;

class Sample {
	int* p;
	int size;

public:
	Sample(int n) {
		this->size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};
Sample ::~Sample() {
	delete[] p;
}
void Sample::read() {
	cout << this->size << "개의 값을 입력하세요," << endl;

	for (int i = 0; i < this->size; i++) {
		cout << i + `1 << "번째 값 입력: ";
		int input;
		cin >> input;
		this->p[i] = input;
	}
}
void Sample::write() {
	cout << "입력된 값은" << '\n';
	for (int i = 0; i < this->size; i++) {
		cout << this->p[i] << ' ';
	}
	cout << endl;
}

int Sample::big() {
	int bigNum = this->p[0];
	for (int index = 1; index < this->size; index++) {
		if (bigNum < this->p[index])
			bigNum = this->p[index];
	}
	return bigNum;
}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}

