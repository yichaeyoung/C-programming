#include <stdio.h>

int main() {
	int num1 = 3, num2 = 5;

	//���ϱ�, ���ϱ�, �������� �����ڸ� ������ �����
	int result = num1++ + num2 * 3;

	printf("���� ���: %d\n", result);

	return 0;
}