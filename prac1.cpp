#include <iostream>
using namespace std;
class Circle {
public:	//Ŭ���� ��, �ܺ� ��� ���� ���
		int radius;		//��� ����
	Circle();			//������
	~Circle();			//�Ҹ���
	double getArea();	//��� �Լ�
};
Circle::Circle() { radius = 1; }	//circleŬ���� ���� circle ������
Circle::~Circle() { cout << "bye" << radius << endl; }	//circleŬ���� ���� circle �Ҹ���
double Circle::getArea() {
	return 3.141592 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;
	
	Circle pizza;
	pizza.radius = 10;
	cout << "pizza ������ " << pizza.getArea() << endl;
}