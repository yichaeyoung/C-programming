#include <iostream>
using namespace std;

//함수의 매개변수 전달방식
//1. 값에 의한 호출(전달) : call by value
//2. 주소에 의한 호출(전달) : call by address
//3. 참조에 의한 호출(전달) : call by reference

//2개의 정수를 입력받아 서로 값을 바꾸어 주는 함수 작성
//			 100,	200
//			  a,	b,
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	//cout << "x = "<< x << ", y = "<< y << endl;

	return;	//호출한 곳으로 결과값을 돌려주어야 한다.
}

void swap1(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	//cout << "x = "<< *x << ", y = "<< *y << endl;

	return;	//호출한 곳으로 결과값을 돌려주어야 한다.

}

void swap2(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	//cout << "x = "<< *x << ", y = "<< *y << endl;

	return;	//호출한 곳으로 결과값을 돌려주어야 한다.

}



int main() {

	//void swap(int x, int y) 함수 호출
	//swap(100, 200);
	int a = 100, b = 200;
	//2개의 정수를 입력바다 서로 값을 바꾸어 주는 함수 호출

	cout << "넘겨 주는 실인수값" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------" << endl;

	//1. 값에 의한 호출(전달) : call by value
	//swap(a, b);
	cout << "값에 의한 호출(call by value)" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "----------------" << endl;

	//2.주소에 의한 호출(전달) : call by address
	//void swap1(int *x, int *y) 함수 호출
	swap1(&a, &b);	//함수의 매개변수가 포인터(변수)인 경우 고치고자 하는 변수의 주소를 넘겨주어야 한다.
	cout << "주소에 의한 호출(call by address)" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "----------------" << endl;

	//3. 참조에 의한 호출(전달) : call by reference
	//swap(a, b);
	cout << "참조에 의한 호출(call by reference)" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "----------------" << endl;
	
	/*
	//참조(Reference)
	//하나의 메모리 공단을 여러개의 변수명(별칭)으로 공유한다.
	//&연산자(주소 연산자)를 별칭 변수명 앞에 붙인다.
	
	//1. 기존의 변수명의 또 다른 이름을 만든다.(변칭 붙이기)
	//2. 기존의 변수명이나 별칭으로 만든 변수명으로 메모리 공간에 접근이 가능하다.
	//3. 기존의 변수명이나 별칭 중에서 어느 한쪽에서 값을 변경하면 동일하게 값이 변경된다.

	int num = 100;
	//포인터(변수)로 메모리 공간의 값을 직접 고치기
	int* pnum;	//주소만 저장할 수 있는 특별한 성격의 변수 --> 포인터(변수)
	pnum = &num;	//pnum 포인터 변수 = 찾아갈 변수의 주소를 넣어준다
	
	cout << *pnum << endl;	//pnum 포인터 변수내에서 주소를 직접 찾아갔더니 존재하는 값
	*pnum = 20;	//pnum 포인터 변수 내에서 주소를 직접 찾아갔더니 존재하는 값을 20으로 새롭게 대입(수정)

	cout << *pnum << endl;	//pnum 포인터 변수내에서 주소를 직접 찾아갔더니 존재하는 값

	//참조로 메모리 공간의 값을 직접 고치기
	int num1 = 50;
	cout << "num1 변수값 = " << num1 << endl;
	cout << "num1 변수 주소값 = " << &num1 << endl;
	cout << "--------------" << endl;

	//참조 변수 만들기(num1 변수의 별칭 만들기: num 변수의 또 다른 이름 만들기)
	//형식)자료형 &별칭 변수명 = 기존의 변수명;

	int& newNum = num1;
	cout << "num1 변수값 = " << num1 << endl;
	cout << "num1 변수 주소값 = " << &num1 << endl;
	cout << "newNum 변수값 = " << newNum << endl;
	cout << "newNum 변수 주소값 = " << &newNum << endl;
	cout << "----------------" << endl;

	newNum = 500;
	cout << "num1 변수값 = " << num1 << endl;
	cout << "num1 변수 주소값 = " << &num1 << endl;
	cout << "--------------" << endl;

	newNum1 = 1000;
	cout << "num1 변수값 = " << num1 << endl;
	cout << "num1 변수 주소값 = " << &num1 << endl;
	cout << "newNum 변수값 = " << newNum << endl;
	cout << "newNum 변수 주소값 = " << &newNum << endl;
	cout << "newNum1 변수값 = " << newNum1 << endl;
	cout << "newNum1 변수 주소값 = " << &newNum1 << endl;
	*/

	//constaant(상수화): 메모리 공간의 값을 새로운 값으로 대입하지 못하게 막는다.
	//포인터와 참조 기능을 보완한다.
	//const 키워드 :ㅣ; 변수를 상수화시킨다.(값을 고치지 못하게 한다.)

	int num2 = 300;

	//int* pnum2;
	//pnum2 = num2
	
	//자료형 앞에 const를 붙이면 찾아갈 주소의 메모리 공간에 새로운 값을 대입못하고
	//포인터 변수명 앞에 const를 붙이면 찾아갈 새로운 주소값을 대입 못한다.
	const int* const pnum2 = &num2;	//찾아갈 주소 포인터 변수에 넣기
	cout << "*pnum2 = " << *pnum2 << endl;

	*pnum2 = 15;	//포인터 변수내에 주소를 찾아가서 고치기
	cout << "*pnum2 = " << *pnum2 << endl;

	//참조의 const 예: const int& newNum1 = newNum;
	return 0;
}