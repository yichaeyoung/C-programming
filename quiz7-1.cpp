#include <iostream>
#include <string>
using namespace std;

/*int main() {
	string name, pass, pass1;

	cout << "�̸� �Է�: ";
	getline(cin, name);

	cout << "��ȣ �Է�: ";
	getline(cin, pass);


	cout << "�ٽ� �Է�: ";
	getline(cin, pass1);


	if (pass==pass1) {
		cout << name << "�Բ��� �α��� �ϼ̽��ϴ�.";
	}

	else {
		cout << name << "��, �ٽ� �Է��ϼ���.";
	}

}*/

int main() {
	
	string name, pass1, pass2;	//string�� ������ ����!!!!! �� ���

	cout << "�̸� �Է�: ";
	getline(cin, name);	//getline ����: getline(cin, ����);

	cout << "��ȣ �Է�: ";
	getline(cin, pass1);

	cout << "�ٽ� �Է�: ";
	getline(cin, pass2);

	if (pass1 == pass2) {
		cout << name << "�Բ��� �α����ϼ̽��ϴ�." << endl;
	}
	else
		cout << name << "��, �ٽ� �Է��ϼ���." << endl;
}