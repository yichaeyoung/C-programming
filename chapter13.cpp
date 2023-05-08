#include <iostream>
using namespace std;

//���(inheritance)�� ������
//���(inheritance) --> �ڵ��� ���뼺
//-->���ο� Ŭ������ ���鶧 ������ ������� Ŭ������ ������� �״�� �����ٰ� ����� �� �ֵ��� �ϴ� ����̴�.

//����������: public(���� ����), protected, private(���� �Ұ���)
class Shape {
	int x, y;	//��� ����

public:
	//�⺻ ������ ����
	Shape() :x(0), y(0) {
		cout << "Shape() : x(0), y(0) �⺻ ������ ȣ��" << this << endl;
	}

	//�Ϲ� ������ ����
	Shape(int xloc, int yloc):x(xloc),y(yloc) {
		cout << "Shape(int xloc, int yloc):x(xloc),y(yloc) �Ϲ� ������ ȣ��" << this << endl;
	}

	//�Ҹ���
	~Shape() {
		cout << "~Shape() �Ҹ��� ȣ��" << this << endl;
	}

	//��� �������� �����Ͱ��� ����ϴ� ����� ���� �Լ� ����
	void show() {
		cout << "x = " << x << ", y = " << y << endl;
	}



};

int main() {
	//��ü ����
	Shape s;
	s.show();
	cout << "--------------" << endl;

	//Shape(int xloc,int yloc:x(xloc),y(yloc) �Ϲ� �����ڰ� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü�� �����Ѵ�.
	Shape s1(10, 10);
	s1.show();
	cout << "-----------------" << endl;

	Rectangle r(10, 10, 100, 100);
	r.show1();

	return 0;
}