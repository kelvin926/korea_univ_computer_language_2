#include <iostream> //iostream : 입출력 헤더 = 표준 입출력을 위한 클래스와 객체가 선언되어 있음

int main(){
	std::cout << "Hello\n";
	std::cout << "첫 번째 맛보기입니다" << std::endl; //줄넘김

	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	return 0;
}