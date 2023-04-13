#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int num, absolute;

	printf("정수 입력: ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("절댓값: %d\n", absolute);

	return 0;
}