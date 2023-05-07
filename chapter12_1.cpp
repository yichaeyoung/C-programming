#include <iostream>
using namespace std;
class Dog {

public:
	string name; //�̸�
	int age;
	
	//�⺻ ������
	Dog() :name("�ٵ���"), age(1) {
		cout << "Dog() �⺻ ������ ȣ�� " << this << endl;
	}

	//�Ϲ� ������
	Dog(string name, int age) :name(name), age(age) {
		cout << "Dog(string name, int age) �Ϲ� ������ ȣ�� " << this << endl;
	}

	//��� ������ ����� ������ ���� ������ִ� �Ϲ� �Լ� ����
	void show() {
		cout << "�̸�: " << this->name << endl;
		cout << "����: " << age << endl;
	}

	//�Ҹ���: ��ü ����� ������ �ڵ����� ȣ��Ǵ� Ư���� �Լ�
	~Dog() { cout << "~Dog() �Ҹ��� ȣ��" << this << endl; };

};

int main() {
	//ù��° ��ü ����: �⺻ ������ ȣ���ؼ� ��� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü�� �����Ѵ�.

	Dog dog;
	dog.show();
	cout << "---------------------" << endl;

	//�ι�° ��ü ����: �⺻ ������ ȣ���ؼ� ��� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü�� �����Ѵ�.
	Dog dog1("��ġ", 2);
	dog1.show();
	cout << "---------------------" << endl;

	//����° ��ü ������ ���� �Ҵ����� �����ϰ� ����Ѵ�.
	cout << "���� �Ҵ�� pDog ��ü ����" << endl;
	Dog* pDog = new Dog();
	(*pDog).show();	//(*). ������ 2���� ���ÿ� �����ϰ� �Ǹ� �켱������ ���ؾ� �Ѵ�. ->(*pDog).
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