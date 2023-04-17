#include <iostream>
using namespace std;
class Circle {
public:	//클래스 내, 외부 모두 접근 허용
		int radius;		//멤버 변수
	Circle();			//생성자
	~Circle();			//소멸자
	double getArea();	//멤버 함수
};
Circle::Circle() { radius = 1; }	//circle클래스 안의 circle 생성자
Circle::~Circle() { cout << "bye" << radius << endl; }	//circle클래스 안의 circle 소멸자
double Circle::getArea() {
	return 3.141592 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;
	
	Circle pizza;
	pizza.radius = 10;
	cout << "pizza 면적은 " << pizza.getArea() << endl;
}