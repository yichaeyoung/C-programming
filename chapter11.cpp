#include <iostream>
using namespace std;

//특별한 함수 : 1.생성자(함수), 소멸자(함수), 복사생성자
//접근 제어자 : public(접근가능: 사용가능),protected, private(접근불가능)
//접근자(함수)와 설정자(함수) 만들기 -> 사용자 정의 함수 형식으로 필요에 따라서 만들어서 사용한다.

//삼각형의 넓이를 구하는 클래스를 작성하고 객체를 생성하기
//삼각형의 넓이 : 밑면 * 높이 / 2

class Triangle{
:private
	int width;
	int height;	//높이
	
public

	//1. 기본 생성자 형식
	/*
	Triangle(){
		this->width = 0;
		height = 0;
	}
	*/

	//멤버 초기화 리스트 형식 : C++에서 제공하는 멤버 변수들을 좀 더 쉽게 초기화할 수 있는 형식이다.
	Triangle() :width(0), height(0) {
		cout << "Triangle() : width(0), height(0) 기본 생성자 호출" << this << endl;

	}

	//2. 일반 생성자 형식
	/*
	Triangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	*/

	Triangle(int width, int height) :width(width), height(height) {
		cout << "Triangle(int width, int height) : width(width), height(height) 일반 생성자 호출" << this << endl;
	}

	//3. 소멸자: 객체의 사용이 끝나명 메모리 공간에서 해제(제거)하는 함수(자동으로 호출이 되어서 사용한다.0
	~Triangle(){
		cout << "~Triangle() 소멸자 호출" << this << endl;
	}
	//사용자 정의 함수 : 삼각형의 넓이를 구하는 함수
	void area func() {
		cout << "삼각형의 넓이 = " << width * height / 2 << endl;
		return;
	}

	//사용자 정의 함수 : 멤버 변수내에 저장된 값을 출력하는 함수
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
	//접근자(함수)와 설정자(함수)만들기--> 사용자 정의 함수 형식으로 필요에 따라서 만들어서 사용한다.
	//게터(getter)와 세터(setter)함수

	//설정자(함수) 만들기(setter) : private으로 접근 못하도록 막아놓은 멤버 변수에 새로운 값을 대입하는 기능을 하는 함수 작성
	void setWidth(int width) {
		this->width = width;
	}
	
	void setHeight(int height) {
		this->height = height;
	}
	//접근자(함수) 만들기(getter): private으로 접근 못하도록 막아놓은 멤버 변수에 저장된 데이터값을 가져오는 기능을 하는 함수 작성
	int getWidth() {
		return width;	//멤버 변수 width에 저장된 데이터값을 호출한 곳으로 돌려준다.
	}
	int getHeight() {
		return height;	//멤버 변수 height에 저장된 데이터값을 호출한 곳으로 돌려준다.
	}
};

int main() {
	//객체 생성 : 클래스의 멤버 변수나 멤버 함수를 메모리 배치시켜서 실제로 사용할 수 있게 하는 것이다
	int a = 10;

	//객체 생성시에는 반드시 생성자(함수)가 호출되어서 멤버 변수에 데이터값을 초기화시켜서 사용한다.
	//Triangle():width(0), height(0) 기본 생성자가 호출되어서 멤버 변수에 데이터값을 초기화시켜서 사용한다.
	Triangle tri;

	tri.show();	//멤버 변수내에 저장된 값을 출력하는 함수 호출 사용
	tri.area_func();	//삼각형의 넓이를 자동으로 구해주는 함수 호출 사용

	/*
	//0값으로 초기화 되어 있는 멤버 변수에 새로운 값을 대입해서 계산해서 사용하기
	tri.width = 100;
	tri.height = 20;

	tri.show();
	tri.area_func();
	cout << "------------------------" << endl;
	*/
	//멤버 변수의 접근제어가 private일 경우 사용하는 방법
	//1. 멤버 변수에 새로운 데이터 값을 대입하는 함수를 각각 호출해서 넣어주기
	//void setWidth(int width)함수 호출
	tri.setWidth(10);

	tri.setHeight(5);

	//2.멤버 변수에 저장된 데이터값을 가져와서 사용하는 함수를 각각 호출
	//tri.getWidth(); //함수 호출도 하고 결과값도 가지고 있다.
	//int getWidth() 함수 호출해서 결과값 확인
	cout << "tri.getWidth() 함수 호출로 돌려받은 width 변수값 = " << tri.getwidth() << endl;
	cout << "tri.getHeight() 함수 호출로 돌려받은 height 변수값 = " << tri.getheight() << endl;
	
	cout << "----------------------------" << endl;
	tri.show();
	tri.area_func();

	//두번째 객체 생성
	Triangle tri1(10, 5);

	tri1.show();
	tri1.area_func();

	tri1.width = 2;
	tri1.height = 1;

	tri1.show();
	tri1.area_func();

	cout << "----------------------" << endl;
	return 0;
};