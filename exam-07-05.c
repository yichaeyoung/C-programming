#include <stdio.h>
int main() {
	int num1 = 5, num2 = 8;

	//ù ��° if�� ������ ��
	if (num2 > 5)
	{
		if (num1 == 5)
			printf("The first if state!");
	}

	//ù ��° if�� ������ ����
	if (num2 < 5)
	{
		if (num1 == 5)
			printf("The second if state!");
	}

	return 0;
}