#include <iostream>
#include <cstring>
using namespace std;
/*int main() {

	char a[100] = "안녕하세요?";
	char b[100] = "날씨가 참 좋군요.";
	char c[100] = "안녕히 계세요!";

	cout << "함수 사용" << endl;
	cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << " " << endl;
	//(1) 한 줄 코딩: cstring에서 제공하는 함수 사용해서 문자열 길이 출력

	cout << "반복문으로 계산" << endl;
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

	//(2) 여러 줄 코딩: cstring에서 제공하는 함수 사용하지 않고,
	//string 클래스도 사용하지 않고, 그냥 반복문을 사용해서 문자열 길이 출력
} */

int main() {

	char a[100] = "안녕하세요?";	//한글은 문자열 2씩으로 취급, 따라서 11
	char b[100] = "날씨가 참 좋군요.";
	char c[100] = "안녕히 계세요!";

	cout << "함수사용" << endl;
	cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << endl;	//strlen: 

	cout << "반복문으로 계산" << endl;
	int a1 = 0;	//a1 선언
	for (int i = 0; a[i] != '\0'; i++) {	//a문자열이 null이 나올때 까지 반복
		a1++;	//a문자열 수 증가
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