#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	float fnum1, fnum2;
	
	printf("�� ���� ���� �Է�:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������: %d %d %d \n", num1, num2, num3);

	printf("�Ǽ�, ����, �Ǽ� ���ʴ�� �Է�: ");
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("�Էµ� ����: %0.2f %d %0.2f \n", fnum1, num1, fnum2);

	return 0;
}