/*
2021271424 장현서
과제2_4
*/

#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
int main() {
	int num;
	cout << "원의 개수 입력>>";
	cin >> num;

	Circle* p = new Circle[num];
	if (!p)
		return 0;
	int radius;
	for (int i = 0; i < 4; i++) {

		cout << "원" << i + 1 << "의 반지름>>";
		cin >> radius;
		p[i].setRadius(radius);

	}
	int count = 0;
	for (int i = 0; i <4; i++) {
		if (p[i].getArea() > 100)
			count++;
	}
	cout << "면적이 100보다 큰 원은" << count << "개 입니다" << endl;



	delete[] p;

	return 0;
}