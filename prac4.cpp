#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);	//Circle globalPizza();로 적게되면 (int r)의 Circle::Circle로 들어가서 출력이 되지 않음!

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	cout << "-------------" << endl;
	f();
	cout << "-------------" << endl;
}