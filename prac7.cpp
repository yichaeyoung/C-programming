#include <iostream>
#include <string>
using namespace std;

int main() {
	string movie("Top Gun");
	string answer("Tom Cruise");
	string input;

	cout << movie + "�� ���ΰ���?";
	cout << "(��Ʈ: ù���ڴ� " << answer[0] << ")?";

	getline(cin, input);

	if (input == answer)
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�." + answer + "�Դϴ�." << endl;

	return 0;
}