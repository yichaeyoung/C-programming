#include <iostream>
#include <cstring>
using namespace std;
/*int main() {

	char a[100] = "�ȳ��ϼ���?";
	char b[100] = "������ �� ������.";
	char c[100] = "�ȳ��� �輼��!";

	cout << "�Լ� ���" << endl;
	cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << " " << endl;
	//(1) �� �� �ڵ�: cstring���� �����ϴ� �Լ� ����ؼ� ���ڿ� ���� ���

	cout << "�ݺ������� ���" << endl;
	int a1 = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		a1++;
	}

	int b1 = 0;
	for (int i = 0; b[i] != '\0'; i++) {
		b1++;
	}

	int c1 = 0;
	for (int i = 0; c[i] != '\0'; i++) {
		c1++;
	}
	
	std::cout << a1 << " " << b1 << " " << c1 << " " << std::endl;

	//(2) ���� �� �ڵ�: cstring���� �����ϴ� �Լ� ������� �ʰ�,
	//string Ŭ������ ������� �ʰ�, �׳� �ݺ����� ����ؼ� ���ڿ� ���� ���
} */

int main() {

	char a[100] = "�ȳ��ϼ���?";	//�ѱ��� ���ڿ� 2������ ���, ���� 11
	char b[100] = "������ �� ������.";
	char c[100] = "�ȳ��� �輼��!";

	cout << "�Լ����" << endl;
	cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << endl;	//strlen: 

	cout << "�ݺ������� ���" << endl;
	int a1 = 0;	//a1 ����
	for (int i = 0; a[i] != '\0'; i++) {	//a���ڿ��� null�� ���ö� ���� �ݺ�
		a1++;	//a���ڿ� �� ����
	}

	int b1 = 0;
	for (int i = 0; b[i] != '\0'; i++) {
		b1++;
	}

	int c1 = 0;
	for (int i = 0; c[i] != '\0'; i++) {
		c1++;
	}

	cout << a1 << " " << b1 << " " << c1 << " " << endl;


}