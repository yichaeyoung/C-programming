#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = -1;

	do {
		printf("-1 입력시 종료: ");
		scanf("%d", &num);
	} while (num != -1);

	return 0;
}