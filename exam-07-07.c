#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("input some positive number: ");
	scanf("%d", &num);

	switch (num)
	{
		//break�� ������ �� ���� case���� ���޾� �ۼ�
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;
		//break�� ������ �� ���� case���� ���޾� �ۼ�
	case 2:
	case 4:
	case 6L:
		printf("even\n");
		break;
	default:
		printf("maybe bigger than 6\n");
	}
	printf("switch state end,\n");

	return 0;
}
