#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num1, num2, num3;

	printf("�� ���� ���� �Է�:");

	//������� 8����, 16����, 10���� �Է�
	scanf("%o %x %d", &num1, &num2, &num3);
	printf("�Էµ� ������: %d %d %d \n", num1, num2, num3);

	return 0;
}