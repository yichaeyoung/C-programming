#include <iostream>
using namespace std;

inline int odd(int x) {
	return (x % 2);
}
int main() {
	int sum = 0;

	for (int i = 1; i <= 10000; i++) {
		if (odd(i)) // 1 = true, 0 = false로 판단해서 홀수를 전부 더함
			sum += i;

	}
	cout << sum;
}
