#include <iostream>
using namespace std;

//함수 오버로딩(Over loading): 함수 중복
//1. 동일한 이름을 가진 함수를 여러개 정의해 놓고 사용할 수 있다.
// *** 2. 함수 이름은 같고 매개변수의 자료형이나 개수는 달라야 한다.
void print(int i) {
	cout << "int i 매개변수값 출력 = " << i << endl;
	return;
}

void print(char i) {
	cout << "char i 매개변수값 출력 = " << i << endl;
	return;
}

void print(double i) {
	cout << "double i 매개변수값 출력 = " << i << endl;
	return;
}

//사각형의 둘레 : 가로 * 세로를 구하는 함수 작성하기
//정수형 매개변수 2개를 입력받아 가로 * 세로로 계산한 결과값을 반환해 주는 함수 작성하기

int square(int a, int b) {

	return a * b;	//가로 * 세로 --> 호출한 곳으로 결과값을 반환해야 한다.

}

int main() {
	//함수 호출
	//void print(int i) 함수 호출
	print(100);

	//void print(char i) 함수 호출
	print('*');

	//void print(double i) 함수 호출
	print(3.14);
	
	//int square (int a, int b) 함수 호출
	int square_tot = square(10, 5);
	cout << "square_tot = " << square_tot << endl;

	return 0;
}