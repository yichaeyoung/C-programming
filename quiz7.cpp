#include <iostream>
#include <cstring>
using namespace std;

/*int main() {
	char name[100], pass[100], pass1[100];

	cout << "�̸� �Է�: ";
	cin >> name;

	cout << "��ȣ �Է�: ";
	cin >> pass;

	cout << "�ٽ� �Է�: ";
	cin >> pass1;

	if (strcmp(pass, pass1) ==0) {
		cout << name << "�Բ��� �α��� �ϼ̽��ϴ�.";
	}

	else {
		cout << name << "��, �ٽ� �Է��ϼ���.";
	}

}*/

int main() {
	char name[100], pass1[100], pass2[100];
	
	cout << "�̸� �Է�: ";
	cin >> name;

	cout << "��ȣ �Է�: ";
	cin >> pass1;

	cout << "�ٽ� �Է�: ";
	cin >> pass2;

	if (strcmp(pass1, pass2) == 0) {	//strcmp = ���ڿ� �� �Լ�, 0= ����, -1= 1���� �۴�, 1=1���� ũ��
		cout << name << "�Բ��� �α����ϼ̽��ϴ�." << endl;
	}
	else
		cout << name << "��, �ٽ� �Է��ϼ���." << endl;

}