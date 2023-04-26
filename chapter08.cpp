﻿#include <iostream>

using namespace std;

//접근 제어자 : 객체룰 생성하고 각 멤버변수와 멤버함수에 접근(사용)할 수 있는지의 여부를 지정해준다.
//1. public(접근가능), protected(상속시에만 접근 가능), private(접근 못하게)

class Rectangle {	//클래스 : 설계도이다.(동작을 할 수 없다)

	public;

	int width;	//가로 --> 10
	int height;	//세로 --> 5

	//1.기본 생성자 형식 : 개발자가 만들어주지 않으면 컴파일러가 자동으로 만들어서 제공해서 객체가 생성된다.
	Rectangle() {
		width = 10;
		height = 5;
	}

	/*
	//2. 일반 생성자 형식 : 객체를 생성할 때 멤버 변수에
	Rectangle(int w, int h) {
		width = w;
		height = h;
	}
	*/
	//Rectangle rect2(100,50)
	//**this키워드: 멤버 변수가 만들어질 주소(메모리 공간)
	//같은 클래스내에서 자신의 멤버변수, 멤버함수에 접근이 필요한 경우에 붙여준다.
	//** 클래스의 멤버 변수이릅과 함수의 매개변수의 이름이 같은 경우 정확하게 this를 붙여서 구분해 주어야 한다.

	Rectangle(int width, int height) {
		
		//나는 멤버 변수 = 나는 외부에서 입력받은 값을 저장해 놓은 매개변수
		this->width = width;	//width = 20;
		this->height = height;	//height = 10;
	}

	//일반 함수 형식
	void area_func() {

		cout << this->width * this->height << endl;	//가로 * 세로
	}

};
​int main() {
	//변수는 초기화 시키든지 값을 나중에라도 대입을 시키지 않으면 컴파일을 시켜주지 않는다.
	// -->수행이 되지 않는다.
	int b;
	b = 20;
	cout << "b변수 = " >> b;

	//객체 생성 : 메모리 공간에 클래스 내의 멤버 변수와 멤버 변수 함수를 배치시켜서 실제로 사용할 수 있도록 하는 기능이다.
	//형식) 자료형 변수명 = 초기값;
	int a = 10;

	//객체 생성 형식) 클래스명 변수명;

	//객체를 생성할 때는 반드시 생성자(함수)가 호출이 되어서 사용되게 되어 있다.
	Rectangle rect;

	/*
	//width, height 변수에 값을 초기화시키지 않아서 컴파일을 시켜주지 않는다.
	cout << rect.width << endl;
	cout << rect.height << endl;
	
	
	//width,height 변수에 값을 
	rect.width = 10;
	rect.height = 5;
	cout << "rect.width = " << rect.width << endl;
	cout << "rect.height = " << rect.height << endl;
	
	//void area_func() 함수 호출(사각형의 넓이를 계산해서 출력해주는 동작을 하는 함수)
	rect.area_func
*/
		//두 번째 객체 생성
		//객체를 생성할 때는 반드시 생성자(함수)가 호출이 되어서 사용되게 되어있다.
		//-->객체를 생성할 때 멤버 변수에 데이터값을 초기화 시키기
		//Rectangle()기본 생성자가 호출이 되어 멤버 변수에 데이터값을 초기화 시켜준다.

		Rectangle rect1;
		cout << "rect1.width = " << rect1.width << endl;
		cout << "rect1.height = " << rect1.height << endl;
		rect1.area_func();
		cout << "----------" << endl;
		
		Rectangle rect2(100,50);
		cout << "rect2.width = " << rect2.width << endl;
		cout << "rect2.height = " << rect2.height << endl;
		rect2.area_func();
		cout << "----------" << endl;
		//일반 생성자 형식을 호출
		//Rectangle(int w,int h)생성자 합수 호출해서 멤버 변수에 데이터값을 초기화 시키기

	return 0;
}