#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int num, absolute;

	printf("���� �Է�: ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("����: %d\n", absolute);

	return 0;
}