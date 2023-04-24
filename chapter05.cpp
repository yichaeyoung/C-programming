#include <iostream>
#include <string>
using namespace std;

//���ڿ�(String)
int main() {
	
	/**/
	//c-string ���
	char name[20] = "���ϳ�";	//'\0'
	const char* name1 = "���ϳ�";

	//C++ ���
	string s1 = "Busan";
	string s2("Wonderful");
	string s3{ "City" };

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "-----------------" << endl;

	//���ڿ��� �ٷ�� �Լ�(�޼���)
	string s = "when i Rome, do as the Romans.";

	//��ҿ� ����
	cout << "s = " << s << endl;
	cout << "s[0] = " << s[0] << endl;
	cout << "-----------------" << endl;


	//���ڿ� ���� �˾ƺ���
	cout << "���ڿ��� ���� (s.length()) = " << s.length() << endl;
	cout << "-----------------" << endl;


	//���ڿ� ã��: Rome�� ���° ��ġ�� �ִ°�?
	cout << "s.find(\"Rome\") = " << s.find("Rome") << endl;
	cout << "-----------------" << endl;

	//18��° ���Ŀ� �ִ� a�� ���° ��ġ�� �ִ°�?
	cout << "s.find(\"a\", 18) = " << s.find("a", 18) << endl;
	cout << "-----------------" << endl;

	//���ڿ� ���� : 7��° ��ġ�� "Korea" ���ڿ� ����
	cout << "s.insert(7,\"Korea\") = " << s.insert(7,"Korea") << endl;
	cout << "-----------------" << endl;

	//���ڿ� ���� : 12��° ��ġ�� "Rome" ���ڿ� ����
	cout << "s.erase(12, 4) = " << s.erase(12, 4) << endl;
	cout << "-----------------" << endl;

	//���ڿ� 1���� �������� : 0��° ��ġ�� ���ڿ� 1���� ��������
	cout << "s.at(0) = " << s.at(0) << endl;
	cout << "-----------------" << endl;
	
	//cin, cout�� ���ڿ� �Լ�

	
	//������ �����ؼ� �Է¹��� �� ����.
	string name;
	string address;

	cout << "�̸� �Է� : " << endl;
	cin >> name;

	cout << "�ּ� �Է� : " << endl;
	cin >> address;

	cout << name << " �л��� �ּҴ� " << address << "�Դϴ�." << endl;
	cout << "-----------------" << endl;
	

	//������ �����ؼ� Enter������ ������ ��� �Է¹ޱ�
	//����)getline(�Է¹޴� ��Ʈ��, ������ ������);
	//����)getline(cin, name);

	
	string name;
	string address;

	cout << "�̸� �Է� : " << endl;
	getline(cin, name);	//������ �����ؼ� �Է� �ޱ�

	cout << "�ּ� �Է� : " << endl;
	getline(cin, address);

	cout << name << " �л��� �ּҴ� \'" << address << "\' �Դϴ�." << endl;
	cout << "-----------------" << endl;
	

	string name;
	string address;

	cout << "�̸� �Է� : " << endl;
	cin >> name;	//���� �����ؼ� �Է� �ȵ�
	//cin.ignore();
	cin.get();	//���� �ϳ� �о����

	cout << "�ּ� �Է� : " << endl;
	getline(cin, address);

	cout << name << " �л��� �ּҴ� \'" << address << "\' �Դϴ�." << endl;
	cout << "-----------------" << endl;
	//���ϳ� ���� �λ걤���� �λ����� ����

	//cin.get(): char�� --> c-string �������� ó���Ѵ�.
	//ǥ�� �Է� ��Ʈ������ ���ڸ� �ϳ��� �����´�.
	cout << "���� �Է�: " << endl;
	char ch1, ch2;
	ch1 = cin.get();
	ch2 = cin.get();
	cout.put(ch1);
	cout.put('\n');
	cout.put(ch2);
	cout.put('A');
	cout.put('\n');


	cout << "ch1 = " << ch1 << "ch2 = " << ch2 << endl;
	*/

	string s = "when i Rome, do as the Romans.";
	/*
	//for���� �̿��� ��� �ϳ� ������ ���
	for (int i = 0; i <= 30; i++) {
		cout << "s[" << i << "] = ";
		cout << s[i] << endl;

	}
	*/

	//�ڵ����� �迭�� ���� ���ϱ� : ��ü �迭�� ���� / �ڷ����� �����ϴ� ũ��

	int len = sizeof(s) / sizeof(char);
	cout << "�迭�� ���� = " << len << endl;
	cout << "----------------" << endl;

		for (int i = 0; i <= s.length(); i++) {
			cout << "s[" << i << "] = ";
			cout << s[i] << endl;
		}

	//for~each�� (�迭 ���� for��)
	//����)for(�迭���� ������ ��Ұ��� �����ϴ� ������ : �迭��){ �ݺ� ó�� ���� } 

		for (string x : s) {
			cout << x;
		}
	return 0;
}