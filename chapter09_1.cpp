#include <iostream>
using namespace std;

class Rectangle {
	public;
	int width;
	int height;
	//�⺻ ������ �Լ� �ۼ�
	// ��� �ʱ�ȭ ����Ʈ ���� : ��� �����餷�� �� �� ���� �ʱ�ȭ �� �� �ִ�.
	Rectangle() {
		//width = 10;
		//height = 5;
	}
	
	Rectangle() : width(0),height(0){}
	//�Ϲ� �Լ�(�޼���) : �簢���� ���̸� ���
	void area_func() {
		cout << width * height << endl;
	}


};
int main() {
	
	//�⺻ �����ڰ� ȣ��Ǿ ��� �������� �� �� ���� �ʱ�ȭ �Ҽ� �ִ�.
	Rectangle(): width(0),height(0){}
	//�Ϲ� �ܼ�(�޼���): �簢���� ���̸� ���
	void area_func() {
		cout << width * height << endl;
	}

	return 0;
}