#include <iostream>
using namespace std;

int main() {
	float sum = 0, sum1 = 0;

	for (int i = 0; i < 101; i++)
	{
		sum = sum + i;

		if (i % 3 == 0) {
			sum1 = sum1 + i;
		}
	}
	cout << "1~100 ������ �������� " << sum << "�̰� ";
	cout << "3�� ����� ���� " << sum1 << "�Դϴ�.";
}