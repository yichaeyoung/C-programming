#include <stdio.h>
int main() {
	int num;
	for (num = 1; num <= 5; num++) {
		if (num == 3)
			continue;	//num의 값이 3이면 반복문의 처음으로 돌아갑니다.
		printf("%d\n", num);
	}

	return 0;
}