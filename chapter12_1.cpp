#include <iostream>
using namespace std;
class Dog {

public:
	string name; //이름
	int age;
	
	//기본 생성자
	Dog() :name("바둑이"), age(1) {
		cout << "Dog() 기본 생성자 호출 " << this << endl;
	}

	//일반 생성자
	Dog(string name, int age) :name(name), age(age) {
		cout << "Dog(string name, int age) 일반 생성자 호출 " << this << endl;
	}

	//멤버 변수에 저장된 데이터 값을 출력해주는 일반 함수 형식
	void show() {
		cout << "이름: " << this->name << endl;
		cout << "나이: " << age << endl;
	}

	//소멸자: 객체 사용이 끝나면 자동으로 호출되는 특별한 함수
	~Dog() { cout << "~Dog() 소멸자 호출" << this << endl; };

};

int main() {
	//첫번째 객체 생성: 기본 생성자 호출해서 멤버 변수에 데이터값을 초기화해서 객체를 생성한다.

	Dog dog;
	dog.show();
	cout << "---------------------" << endl;

	//두번째 객체 생성: 기본 생성자 호출해서 멤버 변수에 데이터값을 초기화해서 객체를 생성한다.
	Dog dog1("뭉치", 2);
	dog1.show();
	cout << "---------------------" << endl;

	//세번째 객체 생성은 동적 할당으로 생성하고 사용한다.
	cout << "동적 할당된 pDog 객체 생성" << endl;
	Dog* pDog = new Dog();
	(*pDog).show();	//(*). 연산자 2개를 동시에 수행하게 되면 우선순위를 정해야 한다. ->(*pDog).
	(*pDog).name;
	cout << "----------------" << endl;
	pDog->show();
	pDog->name;
	pDog->age;
	cout << "----------------" << endl;
	cout << (*pDog).name << endl;
	cout << (*pDog).age << endl;

	cout << pDog->name << endl;
	cout << pDog->age << endl;

	delete pDog;


	return 0;
}