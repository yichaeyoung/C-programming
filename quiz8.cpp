#include <iostream>
#include <string>
using namespace std;
int main() {

	string question[] = { "개","고양이","기린","코끼리","표범" };
	string answer[] = { "dog","cat","giraffe","elephant","leopard" };
	string ox;	//맞을 때 마다 O, 틀릴 때마다 X 추가
	int score(0);
	
	cout << "영단어로 바꾸세요." << endl;
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
			ox += 'O';	//변수 ox가 문자열 배열이 아닌 문자열으로만 표현됨
			score += 20;
		}
		else {
			ox += 'X';
		}
	}

	cout << "==>" << ox << " " << score << "점입니다." << endl;
}

