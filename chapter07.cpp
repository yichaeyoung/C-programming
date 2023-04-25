//더하기, 빼기, 곱하기, 나누기를 수행하는 함수를 만들고 호출해서 사용하기

//클래스가 아닌 형태​

#include <iostream>

using namespace std;

​

​

double add(double a, double b) {

	return a + b; //호출한 곳으로 반환값을 돌려준다.!!!

}

​

double sub(double a, double b) {

	return a - b; //호출한 곳으로 반환값을 돌려준다.!!!

}

​

​

double mul(double a, double b) {

	return a * b; //호출한 곳으로 반환값을 돌려준다.!!!

}

​

​

double ddiv(double a, double b) {

	return a / b; //호출한 곳으로 반환값을 돌려준다.!!!

}

​

​

int main() {

	​

		//double add(double a, double b) 함수 호출

		cout << "add(10, 5) 돌려받은 결과값 = " << add(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		//double sub(double a, double b) 함수 호출

		cout << "sub(10, 5) 돌려받은 결과값 = " << sub(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		//double mulub(double a, double b) 함수 호출

		cout << "mul(10, 5) 돌려받은 결과값 = " << mul(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		//double ddiv(double a, double b) 함수 호출

		cout << "ddiv(10, 5) 돌려받은 결과값 = " << ddiv(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		​

		return 0;

}

​

--------------------------------------------------------------------

//사칙연산을 수행하는 계산기 클래스(class) 만들기 (1)

#include <iostream>

using namespace std;

​

//사칙연산을 수행하는 계산기 클래스(class) 만들기 (4개의 함수를 묶어서 제공한다.)

//1.클래스(class) 이름은 첫 번째 글자를 대문자로 표시

//2.클래스(class) : 설계도이다. 설계도는 실제로 아무런 기능을 할 수 없다.

//3.클래스는 객체(object)를 생성해야만 실제로 기능을 할 수 있다.

//-> *** 객체(object) : 설계도에 정의된 변수나 함수(메서드)를 실제로 사용할 수 있도록 메모리 공간에 배치를 시키는 기능이다.!!!

//4.접근제어자를 지정해서 변수나 함수에 접근(사용)을 허용할지 여부를 결정 : 

//4-1)public : 접근 가능

//4-2)protected: 상속시에만 접근 가능

//4-3)private: 접근 불가능(자신의 클래스내에서만 서로 접근 가능)

​

​

class Calculator {

	//실수(double형)의 값 2개을 입력받아서 더하는 함수(메서드) 만들기

	//           10,      5

public:

	double add(double a, double b) {

		return a + b; //호출한 곳으로 반환값을 돌려준다.!!!

	}
	​

		double sub(double a, double b) {

		return a - b; //호출한 곳으로 반환값을 돌려준다.!!!

	}

	​

		​

		double mul(double a, double b) {

		return a * b; //호출한 곳으로 반환값을 돌려준다.!!!

	}

	​

		​

		double ddiv(double a, double b) {

		return a / b; //호출한 곳으로 반환값을 돌려준다.!!!

	}

};

​

int main() {

	//자료형 변수명 = 초기값;

	int a = 10;

	​

		//객체(Object)를 생성 : 설계도(클래스)내의 멤버(변수나 함수)들을 실제로 사용할 수 있도록 메모리 공간에 배치시켜 준다.!!!

		//객체 생성 형식) 클래스명 변수명(객체명);

		Calculator cal;

	​

		//객체(Object) 내의 멤버들에 접근형식)

		//변수명(객체명).함수명(매개변수값);

		​

		​

		​

		//double add(double a, double b) 함수 호출

		//cal.add(10, 5);

		​

		cout << "cal.add(10, 5) 돌려받은 결과값 = " << cal.add(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		//double sub(double a, double b) 함수 호출

		cout << "cal.sub(10, 5) 돌려받은 결과값 = " << cal.sub(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		//double mulub(double a, double b) 함수 호출

		cout << "cal.mul(10, 5) 돌려받은 결과값 = " << cal.mul(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		//double ddiv(double a, double b) 함수 호출

		cout << "cal.ddiv(10, 5) 돌려받은 결과값 = " << cal.ddiv(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.!!!

	cout << "--------------" << endl;

	​

		​

		return 0;

}

​

----------------------------------------------------

//사칙연산을 수행하는 계산기 클래스(class) 만들기 (2)

​

#include <iostream>

using namespace std;

​

//함수의 원형 선언만 선언되어 있으면 함수 정의는 따로 분리되어 어느 위치에 있더라도 찾아서 사용된다.!!!

class Calculator {

	​

public:

	double add(double a, double b); //함수 원형 선언

	double sub(double a, double b);

	double mul(double a, double b);

	double ddiv(double a, double b);

};

​

//함수 정의는 클래스 바깥에 해도 되다.!!!

//함수명 앞에 클래스이름:: 형식을 지정해야 한다.!!!

double Calculator::add(double a, double b) { //함수 정의

	return a + b;

}

​

double Calculator::sub(double a, double b) {

	return a - b;

}

​

double Calculator::mul(double a, double b) {

	return a * b;

}

​

double Calculator::ddiv(double a, double b) {

	return a / b;

}

​

​

int main() {

	​

		//수행할 연산 -> ( 1: 더하기, 2:빼기, 3:곱하기, 4:나누기  ) 메뉴로 선택하고

		//a, b 변수에 계산할 값을 (함수가 처리할 매개변수 값)을 직접 입력받아 처리하는 프로그램 작성

		​

		​

		int menu; //1: 더하기, 2:빼기, 3:곱하기, 4:나누기 메뉴를 선택하도록 입력받는 변수

	double a = 0, b = 0; //계산할 매개변수값을 저장하는 a, b변수

	​

		//객체 생성 : 메모리공간에 실제로 메서드를 배치한다.

		Calculator cal;

	​

		//키보드로 직접 a, b변수의 매개변수값을 입력받아서 저장해서 처리하기

		​

		while (1) { //무한 반복

			​

				cout << "1.덧셈\n2.뺄셈\n3.곱셈\n4.나눗셈\n";

			cout << "선택 (메뉴 : 1, 2, 3, 4 만 선택 가능) >> ";

			cin >> menu;

			cout << "-----------------------\n";

			​

				switch (menu) {

					​

				case 1: //더하기 연산 수행하는 과정 

					cout << "2개의 숫자를 입력하세요 >>> : ";

					cin >> a >> b;

					cout << a << " + " << b << " =  " << cal.add(a, b) << endl; //계산기 클래스 안에 있는 add라는 함수를 호출하여 사용한다.

					break;

					​

				case 2: //빼기 연산 수행하는 과정 

					cout << "2개의 숫자를 입력하세요 >>> : ";

					cin >> a >> b;

					cout << a << " - " << b << " =  " << cal.sub(a, b) << endl; //계산기 클래스 안에 있는 sub라는 함수를 호출하여 사용한다.

					break;

					​

				case 3: //곱하기 연산 수행하는 과정 

					cout << "2개의 숫자를 입력하세요 >>> : ";

					cin >> a >> b;

					cout << a << " * " << b << " =  " << cal.mul(a, b) << endl; //계산기 클래스 안에 있는 mul라는 함수를 호출하여 사용한다.

					break;

					​

				case 4: //나누기 연산 수행하는 과정 

					cout << "2개의 숫자를 입력하세요 >>> : ";

					cin >> a >> b;

					cout << a << " / " << b << " =  " << cal.ddiv(a, b) << endl; //계산기 클래스 안에 있는 ddiv라는 함수를 호출하여 사용한다.

					break;

				}

			​

				//while(1) : 무한 반복 제어 (메뉴는 1, 2, 3, 4만 있으므로 다른 숫자가 입력되면 종료하기)

				if (menu <= 0 || menu >= 5) {

					cout << "없는 메뉴 - 프로그램을 종료합니다.!!!!";

					break;

				}

			cout << "=========================\n";

			​

		}

	​

		return 0;

}
[출처] C++ 프로그래밍 7일차 수업!!!| 작성자 now