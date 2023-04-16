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
	cout << "1~100 사이의 정수합은 " << sum << "이고 ";
	cout << "3의 배수의 합은 " << sum1 << "입니다.";
}