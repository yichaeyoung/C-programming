#include <iostream>
using namespace std;
/*
class Rectangle {
public:
	int width;
	int height;
	double getArea();
};

double Rectangle::getArea() {
	return width * height;
}
*/
class Rectangle {
public:
	int width;
	int height;
	double getArea();
};

double Rectangle::getArea() {

	return width* height;	//반환 중요!!!!

}


int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;

	return 0;
}