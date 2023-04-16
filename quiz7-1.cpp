#include <iostream>
#include <string>
using namespace std;

/*int main() {
	string name, pass, pass1;

	cout << "이름 입력: ";
	getline(cin, name);

	cout << "암호 입력: ";
	getline(cin, pass);


	cout << "다시 입력: ";
	getline(cin, pass1);


	if (pass==pass1) {
		cout << name << "님께서 로그인 하셨습니다.";
	}

	else {
		cout << name << "님, 다시 입력하세요.";
	}

}*/

int main() {
	
	string name, pass1, pass2;	//string은 변수로 사용됨!!!!! 꼭 기억

	cout << "이름 입력: ";
	getline(cin, name);	//getline 형식: getline(cin, 변수);

	cout << "암호 입력: ";
	getline(cin, pass1);

	cout << "다시 입력: ";
	getline(cin, pass2);

	if (pass1 == pass2) {
		cout << name << "님께서 로그인하셨습니다." << endl;
	}
	else
		cout << name << "님, 다시 입력하세요." << endl;
}