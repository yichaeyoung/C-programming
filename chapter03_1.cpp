#include <iostream>
using namespace std;

//�Լ� �����ε�(Over loading): �Լ� �ߺ�
//1. ������ �̸��� ���� �Լ��� ������ ������ ���� ����� �� �ִ�.
// *** 2. �Լ� �̸��� ���� �Ű������� �ڷ����̳� ������ �޶�� �Ѵ�.
void print(int i) {
	cout << "int i �Ű������� ��� = " << i << endl;
	return;
}

void print(char i) {
	cout << "char i �Ű������� ��� = " << i << endl;
	return;
}

void print(double i) {
	cout << "double i �Ű������� ��� = " << i << endl;
	return;
}

//�簢���� �ѷ� : ���� * ���θ� ���ϴ� �Լ� �ۼ��ϱ�
//������ �Ű����� 2���� �Է¹޾� ���� * ���η� ����� ������� ��ȯ�� �ִ� �Լ� �ۼ��ϱ�

int square(int a, int b) {

	return a * b;	//���� * ���� --> ȣ���� ������ ������� ��ȯ�ؾ� �Ѵ�.

}

int main() {
	//�Լ� ȣ��
	//void print(int i) �Լ� ȣ��
	print(100);

	//void print(char i) �Լ� ȣ��
	print('*');

	//void print(double i) �Լ� ȣ��
	print(3.14);
	
	//int square (int a, int b) �Լ� ȣ��
	int square_tot = square(10, 5);
	cout << "square_tot = " << square_tot << endl;

	return 0;
}