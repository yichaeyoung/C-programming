#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	//���ѷ����� ����� ���๮(���� ����� Ctrl+C�� �Է�)
	while (1) {
		printf("���� �ݺ���... ���ڸ� �Է��ϼ���: ");
		scanf("%d", &num);
		printf("%d��(��) �Է��ϼ̳׿�.\n", num);
	}
	return 0;
}