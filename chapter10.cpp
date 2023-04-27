#include <iostream>
using namespace std;

//사각형의 넓이를 구하는 클래스 만들기

//**특별한 함수:1. 생성자(함수), 2.소멸자(함수),3.복사 생성자(함수)

//2.소멸자(함수): 객체의 사용이 끝나면 자동으로 컴파일러에 의해서 호출되어 사용되는 특별한 함수이다.
//**소멸자 작성 규칙
//1)함수이름은 클래스명과 같아야 한다.
//2)클래스명 앞에 물결표(~)를 붙여서 나타낸다,
//3)한번만 정의된다.
//4)매개변수, 함수처리 결과를 반환하는 반환값자료형, return 값 없다(void아니고 아예 없다.)
//형식)~(클래스명과 동일한)함수명(){}


class Rectangle {

private:
	int width;
	int height;


public:
	int width;
	int height;
	
	/*
	//1. 기본 생성자 형식 : 객체 생성시에 멤버 변수에 데이터 값을 직접 넣어 줄 수 없는 형식이다.
	Rectangle() {
		this->width = 0;
		this->height = 0;
	}
	*/

	//멤버 초기화 리스트 형식: C++에서 제공하는 멤버 변수들을 좀 더 쉽게 초기화할 수 있는 형식이다.
	Rectangle():width(0),height(0){
		cout << "Rectangle():width(0),height(0) 기본 생성자 호출" << this << endl;
	}

	/*
	//2. 일반 생성자 형식 : 객체 생성시에 멤버 변수에 데이터 값을 직접 넣어 줄 수 있는 형식이다.
	//Rectangle rect1 (100,50) 객체 생성
	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	
	}
	*/
	Rectangle(int width, int height) : width(width), height(height) {
		cout << "Rectangle(int width, int height): width(width), height(height) 일반 생성자 호출" << this << endl;
	}

	//소멸자: 작성하지 않으면 컴파일러가 자동으로 만들어서 추가해서 수행시킨다.
	~Rectangle() {
		cout << "~Rectangle() 소멸자 호출" << this << endl;
	}


	//사용자가 필요할 때 사용하려고 만들어놓은 함수 --> 자동으로 호출되어서 사용되는 것이 아니다.
	//사용자 정의 함수 --> 만들어 놓고 호출해야만 사용할 수 있는 함수
	void area_func() {
		cout << width * height << endl;
		
		return;
	}
	//멤버 변수 내에서 들어 있는 데이터값을 확인(출력)하는 사용자 정의 함수 만들기
	void show() {
		cout << width << height << endl;
	}

};

int main() {
	//객체 생성: 클래스를 메모리 공간에 실제로 배치를 시켜서 멤버 변수나 멤버 함수를 사용할 수 있게 한다.
	//객체를 생성하게 되면 자동으로 생성자(함수)가 호출되어서 멤버 변수에 값을 초기화 시켜주게 되어 있다.
	
	//첫번째 객체 생성
	//Rectangle() 기본 생성자가 호출이 되어서 멤버 변수에 값을 초기화
	Rectangle rect;

	/*
	//멤버 변수 rect.width, rect.height에 데이터값이 초기화가 되어있지 않아서 컴파일을 시켜주지 않는다.(오류)
	int a = 10;
	cout << "a = " << a << endl;
	cout << "---------------" << endl;
	

	//객체 생성: 클래스를 메모리 공간에 실제로 배치를 시켜서 멤버 변수나 멤버 함수를 사용할 수 있게 한다.
	Rectangle rect;

	cout << "rect.width = "<<rect.width << endl;
	cout << "rect.height = " << rect.height << endl;

	//void area-func() 함수 호출해서 사각형의 넓이를 구한다.
	rect.area_func();

	//멤버 변수내에 값을 대입을 시켜서 사용하게 한다.
	rect.width = 10;
	rect.height = 5;
	*/
	/*
	cout << "rect.width = " << rect.width << endl;
	cout << "rect.height = " << rect.height << endl;

	//void area-func() 함수 호출해서 사각형의 넓이를 구한다.
	rect.area_func();
	cout << "-------------" << endl;

	//두번째 객체 생성
	Rectangle rect1(100, 50);

	cout << "rect1.width = " << rect1.width << endl;
	cout << "rect1.height = " << rect1.height << endl;

	//void area_func() 함수 호출해서 사각형의 넓이를 구한다.
	rect1.area_func();
	*/
	/*
	//세번째 객체 생성
	//Rectangle() 기본 생성자가 호출되어서 멤버 변수에 데이터값을 초기화
	Rectangle rect2;
	cout << "rect2.width = " << rect2.width << endl;
	cout << "rect2.height = " << rect2.height << endl;
	rect2.area_func();
	cout << "---------------" << endl;

	//네번째 객체 생성
	//Rectangle(int width,int height) 일반 생성자가 호출되어서 멤버 변수에 데이터값을 초기화
	Rectangle rect3(200, 100);
	cout << "rect3.width = " << rect2.width << endl;
	cout << "rect3.height = " << rect2.height << endl;
	rect3.area_func();
	cout << "---------------" << endl;
	*/

	//다섯번째 객체 만들기
	//Rectangle(int width,int height) 일반 생성자 형식의 함수가 호출되어서 멤버 변수에 데이터값을 초기화한다.
	Rectangle rect4(10, 5);

	//멤버 변수내의 값을 출력하는 사용자 정의 함수를 호출해서 확인
	rect4.show();
	
	//멤버 변수내의 값으로 사각형의 넓이를 구하는 사용자 정의 함수를 호출해서 확인
	rect4.area_func();

	return 0;
}