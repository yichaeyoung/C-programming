#include <iostream>
using namespace std;

//�Լ��� �Ű����� ���޹��
//1. ���� ���� ȣ��(����) : call by value
//2. �ּҿ� ���� ȣ��(����) : call by address
//3. ������ ���� ȣ��(����) : call by reference

//2���� ������ �Է¹޾� ���� ���� �ٲپ� �ִ� �Լ� �ۼ�
//			 100,	200
//			  a,	b,
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	//cout << "x = "<< x << ", y = "<< y << endl;

	return;	//ȣ���� ������ ������� �����־�� �Ѵ�.
}

void swap1(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	//cout << "x = "<< *x << ", y = "<< *y << endl;

	return;	//ȣ���� ������ ������� �����־�� �Ѵ�.

}

void swap2(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	//cout << "x = "<< *x << ", y = "<< *y << endl;

	return;	//ȣ���� ������ ������� �����־�� �Ѵ�.

}



int main() {

	//void swap(int x, int y) �Լ� ȣ��
	//swap(100, 200);
	int a = 100, b = 200;
	//2���� ������ �Է¹ٴ� ���� ���� �ٲپ� �ִ� �Լ� ȣ��

	cout << "�Ѱ� �ִ� ���μ���" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------" << endl;

	//1. ���� ���� ȣ��(����) : call by value
	//swap(a, b);
	cout << "���� ���� ȣ��(call by value)" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "----------------" << endl;

	//2.�ּҿ� ���� ȣ��(����) : call by address
	//void swap1(int *x, int *y) �Լ� ȣ��
	swap1(&a, &b);	//�Լ��� �Ű������� ������(����)�� ��� ��ġ���� �ϴ� ������ �ּҸ� �Ѱ��־�� �Ѵ�.
	cout << "�ּҿ� ���� ȣ��(call by address)" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "----------------" << endl;

	//3. ������ ���� ȣ��(����) : call by reference
	//swap(a, b);
	cout << "������ ���� ȣ��(call by reference)" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "----------------" << endl;
	
	/*
	//����(Reference)
	//�ϳ��� �޸� ������ �������� ������(��Ī)���� �����Ѵ�.
	//&������(�ּ� ������)�� ��Ī ������ �տ� ���δ�.
	
	//1. ������ �������� �� �ٸ� �̸��� �����.(��Ī ���̱�)
	//2. ������ �������̳� ��Ī���� ���� ���������� �޸� ������ ������ �����ϴ�.
	//3. ������ �������̳� ��Ī �߿��� ��� ���ʿ��� ���� �����ϸ� �����ϰ� ���� ����ȴ�.

	int num = 100;
	//������(����)�� �޸� ������ ���� ���� ��ġ��
	int* pnum;	//�ּҸ� ������ �� �ִ� Ư���� ������ ���� --> ������(����)
	pnum = &num;	//pnum ������ ���� = ã�ư� ������ �ּҸ� �־��ش�
	
	cout << *pnum << endl;	//pnum ������ ���������� �ּҸ� ���� ã�ư����� �����ϴ� ��
	*pnum = 20;	//pnum ������ ���� ������ �ּҸ� ���� ã�ư����� �����ϴ� ���� 20���� ���Ӱ� ����(����)

	cout << *pnum << endl;	//pnum ������ ���������� �ּҸ� ���� ã�ư����� �����ϴ� ��

	//������ �޸� ������ ���� ���� ��ġ��
	int num1 = 50;
	cout << "num1 ������ = " << num1 << endl;
	cout << "num1 ���� �ּҰ� = " << &num1 << endl;
	cout << "--------------" << endl;

	//���� ���� �����(num1 ������ ��Ī �����: num ������ �� �ٸ� �̸� �����)
	//����)�ڷ��� &��Ī ������ = ������ ������;

	int& newNum = num1;
	cout << "num1 ������ = " << num1 << endl;
	cout << "num1 ���� �ּҰ� = " << &num1 << endl;
	cout << "newNum ������ = " << newNum << endl;
	cout << "newNum ���� �ּҰ� = " << &newNum << endl;
	cout << "----------------" << endl;

	newNum = 500;
	cout << "num1 ������ = " << num1 << endl;
	cout << "num1 ���� �ּҰ� = " << &num1 << endl;
	cout << "--------------" << endl;

	newNum1 = 1000;
	cout << "num1 ������ = " << num1 << endl;
	cout << "num1 ���� �ּҰ� = " << &num1 << endl;
	cout << "newNum ������ = " << newNum << endl;
	cout << "newNum ���� �ּҰ� = " << &newNum << endl;
	cout << "newNum1 ������ = " << newNum1 << endl;
	cout << "newNum1 ���� �ּҰ� = " << &newNum1 << endl;
	*/

	//constaant(���ȭ): �޸� ������ ���� ���ο� ������ �������� ���ϰ� ���´�.
	//�����Ϳ� ���� ����� �����Ѵ�.
	//const Ű���� :��; ������ ���ȭ��Ų��.(���� ��ġ�� ���ϰ� �Ѵ�.)

	int num2 = 300;

	//int* pnum2;
	//pnum2 = num2
	
	//�ڷ��� �տ� const�� ���̸� ã�ư� �ּ��� �޸� ������ ���ο� ���� ���Ը��ϰ�
	//������ ������ �տ� const�� ���̸� ã�ư� ���ο� �ּҰ��� ���� ���Ѵ�.
	const int* const pnum2 = &num2;	//ã�ư� �ּ� ������ ������ �ֱ�
	cout << "*pnum2 = " << *pnum2 << endl;

	*pnum2 = 15;	//������ �������� �ּҸ� ã�ư��� ��ġ��
	cout << "*pnum2 = " << *pnum2 << endl;

	//������ const ��: const int& newNum1 = newNum;
	return 0;
}