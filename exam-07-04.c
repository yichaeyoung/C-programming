#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int num;
	printf("input your number: ");
	scanf("%d", &num);

	if (num == 2)
		printf("your number: ");
	scanf("%d", &num);

	if (num == 2)
		printf("your number is 2");
	else if (num == 4)
		printf("your number is 4");
	else if (num == 8)
		printf("your number is 8");
	//else���� ������ �ʾҽ��ϴ�.

	return 0;
}