#include <iostream>
#include <string>	//���ڿ��� ó���ϴ� �Լ��� ����ִ� ���̺귯��
#include <cstdlib>	//������ �����Ű�� �Լ��� ����ִ� ���̺귯��
#include <ctime>	//�ð��� �����ϴ� �Լ��� ����ִ� ���̺귯��
using namespace std;

int main() {
	/*
	//���ڿ�(string)
	
	//c-string ���
	char name[20] = "���ϳ�";

	//C++ ���
	string s = "when in Rome, do as the Romans";
	//string s = "�츮���� ���ѹα�";	//�ѱ��� ���� �ϳ��� 2byteũ���̴�.(�޸� 2���� ���� �ϳ��� �̷��.)

	//��ҿ� ����
	cout << "s = " << s << endl;
	cout << "s[0] = " << s[0] << endl;
	cout << "---------------" << endl;

	//���ڿ� ���� �˾ƺ���
	cout << "���ڿ��� ���� (s.length()) = " << s.length() << endl;

	//���ڿ� ���
	//for���� �̿��� ��� �ϳ� �ϳ� ������ ���
	for (int i = 0; i <= 29; i++) {
		cout << "s[" << i << "] = ";
		cout << s[i] << endl;
	}

	//for~each��(�迭 ���� for��)
	//����) for (�迭���� ������ ��Ұ��� �����ϴ� ������ : �迭��){�ݺ� ó�� ����}

	for (char x : s) {
		cout << "x = " << x << endl;
	}
	
	
	//�ѱ��� ���� �ϳ��� 2byteũ���̴�.(�޸� 2���� ���� �ϳ��� �̷��.)
	string name = "ö��";
	string name1 = "����";
	string name2 = "�浿";

	//string s ="�츮���� ���ѹα�";
	string s[] = {
		{ "��" },
		{ "��" },
		{ "��" },
		{ "��" },
		{ "��" },
		{ "��" },
		{ "��" },
		{ "��" }
	};
	string list[] = { "ö��","����","�浿" };

	//��ҿ� ����
	cout << "list = " << list << endl;
	cout << "list[0] = " << list[0] << endl;
	cout << "---------------" << endl;

	//for~each��(�迭 ���� foi��)
	//����)for(�迭���� ������ ��Ұ��� �����ϴ� ������:�迭��){�ݺ� ó�� ����}
	for (string x1: list) {
		cout << x1 << "�� �ȳ�" << endl;
		cout << "------------" << endl;
	}
	

	//���� �߻�(������ ��)
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "----------" << endl;

	//���� �ð� ǥ��
	cout << "���� �ð� ǥ�� = " << time(NULL) << endl;
	cout << "----------" << endl;

	//seed���� �����ؼ� ���� �߻��ÿ� ���ڸ� �����ų �� �ִ� ������ ������ִ� �Լ�
	//����)srand(����ð��� seed������ ����);
	srand(time(NULL));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "----------" << endl;

	for (int i = 1; i <= 5; i++) {

		//		  1 % 5 = 1
		//		  2 % 5 = 2
		//		  3 % 5 = 3
		//		  4 % 5 = 4
		//		  5 % 5 = 0
		cout << rand() % 5 << endl;	//0~4������ ���� ������ �����Ѵ� (+1 ���ָ� 1~5�� ���� ����)
		
	}
	*/

	//��� ���� : ��ǻ�Ϳ� ������ ���� ���ڿ� ���߱� ����


char ch;	//��ǻ�Ϳ� ������ ���� ���ڿ� ���� �׸�
string solution;	//��ǻ�Ϳ� ������ ���� ���ڿ� �߿��� ���õ� ���ڿ��� ����Ǵ� ����

//��ǻ�Ϳ� ������ ���� ���ڿ� ���� �׸�
string list[] =
{
	"the",
	"c++",
	"programming",
	"language"
};

//list[] �迭�� ��ȣ�߿��� ������ ��ȣ�� ��ǻ�Ͱ� �����ϱ� ���� ���� �߻�
srand(time(NULL));
int n = rand() % 4;	//0~3���� ���� ������ �� �߻�
cout << "��ǻ�Ͱ� �߻���Ų ����: " << n << endl;
cout << "-------------" << endl;

//������ ����� ���ڿ��� �����ؼ� solution ������ ����
solution = list[n];
//cout<<"solution = "<< solution << endl;

//���õ� ������ ���ڿ��� ���̸� ǥ���Ѵ�.
string guess(solution.length(), '*');
cout << "guess = " << guess << endl;

while (true) {
	cout << "guess = " << guess << endl;

	cout << "�����ϴ� ���� �ϳ��� �Է��ϼ��� >>>" << endl;

	cin >> ch;	//Ű���忡�� ����ڰ� ***ǥ�õ� ���ڿ��� ���߱� ���ؼ� �Է��ϴ� ���� �ϳ��� ch������ ����
	
	for (int i = 0; i < solution.length();  i++) {
		if (ch == solution[i])	//solution[0]
		{
			guess[i] = ch;
		}
	}

	//"the"==***
	if (solution == guess)
	{
		cout << solution << endl;
		cout << "�����ϼ̽��ϴ�.";
		break;
	}
}
	return 0;

}