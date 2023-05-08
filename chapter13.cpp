#include <iostream>
using namespace std;

//상속(inheritance)과 다형성
//상속(inheritance) --> 코드의 재사용성
//-->새로운 클래스를 만들때 기존의 만들어진 클래스의 멤버들을 그대로 가져다가 사용할 수 있도록 하는 방법이다.

//접근제어자: public(접근 가능), protected, private(접근 불가능)
class Shape {
	int x, y;	//멤버 변수

public:
	//기본 생성자 형식
	Shape() :x(0), y(0) {
		cout << "Shape() : x(0), y(0) 기본 생성자 호출" << this << endl;
	}

	//일반 생성자 형식
	Shape(int xloc, int yloc):x(xloc),y(yloc) {
		cout << "Shape(int xloc, int yloc):x(xloc),y(yloc) 일반 생성자 호출" << this << endl;
	}

	//소멸자
	~Shape() {
		cout << "~Shape() 소멸자 호출" << this << endl;
	}

	//멤버 변수내의 데이터값을 출력하는 사용자 정의 함수 형식
	void show() {
		cout << "x = " << x << ", y = " << y << endl;
	}



};

int main() {
	//객체 생성
	Shape s;
	s.show();
	cout << "--------------" << endl;

	//Shape(int xloc,int yloc:x(xloc),y(yloc) 일반 생성자가 호출되어서 멤버 변수에 데이터값을 초기화해서 객체를 생성한다.
	Shape s1(10, 10);
	s1.show();
	cout << "-----------------" << endl;

	Rectangle r(10, 10, 100, 100);
	r.show1();

	return 0;
}