#include <stdio.h>
int main() {
	int num;
	for (num = 1; num <= 5; num++) {
		if (num == 3)
			continue;	//num�� ���� 3�̸� �ݺ����� ó������ ���ư��ϴ�.
		printf("%d\n", num);
	}

	return 0;
}