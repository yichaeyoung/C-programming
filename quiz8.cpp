#include <iostream>
#include <string>
using namespace std;
int main() {

	string question[] = { "��","�����","�⸰","�ڳ���","ǥ��" };
	string answer[] = { "dog","cat","giraffe","elephant","leopard" };
	string ox;	//���� �� ���� O, Ʋ�� ������ X �߰�
	int score(0);
	
	cout << "���ܾ�� �ٲټ���." << endl;
	for (int i = 0; i < 5; i++) {
		/*cout << question[i] << ": ";
		string a;
		getline(cin, a);

		if (a == answer[i]) {
			ox += "O";
			score += 20;
		}

		else {
			ox += "X";
			score += 0;
		}*/
		cout << question[i] << ": ";
		string a;
		getline(cin, a);
		
		if (answer[i] == a) {
			ox += 'O';	//���� ox�� ���ڿ� �迭�� �ƴ� ���ڿ����θ� ǥ����
			score += 20;
		}
		else {
			ox += 'X';
		}
	}

	cout << "==>" << ox << " " << score << "���Դϴ�." << endl;
}

