#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	while (1) {
		printf("-1 �Է½� ����: ");
		scanf("%d", &num);
		if (num == -1)
			break;
	}

	return 0;
}