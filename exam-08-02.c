#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0;
	
	while (num != -1) {
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����):");
		scanf("%d", &num);
		if (num == -1)
			printf("�����մϴ�.");
		else
			printf("%d��(��) �Է��ϼ̳׿�.\n", num);
	}
	return 0;
}