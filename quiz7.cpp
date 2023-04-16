#include <iostream>
#include <cstring>
using namespace std;

/*int main() {
	char name[100], pass[100], pass1[100];

	cout << "이름 입력: ";
	cin >> name;

	cout << "암호 입력: ";
	cin >> pass;

	cout << "다시 입력: ";
	cin >> pass1;

	if (strcmp(pass, pass1) ==0) {
		cout << name << "님께서 로그인 하셨습니다.";
	}

	else {
		cout << name << "님, 다시 입력하세요.";
	}

}*/

int main() {
	char name[100], pass1[100], pass2[100];
	
	cout << "이름 입력: ";
	cin >> name;

	cout << "암호 입력: ";
	cin >> pass1;

	cout << "다시 입력: ";
	cin >> pass2;

	if (strcmp(pass1, pass2) == 0) {	//strcmp = 문자열 비교 함수, 0= 같다, -1= 1번이 작다, 1=1번이 크다
		cout << name << "님께서 로그인하셨습니다." << endl;
	}
	else
		cout << name << "님, 다시 입력하세요." << endl;

}