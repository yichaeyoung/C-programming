#include <stdio.h>
#define LENGTH 10	//��ũ�� ��� ���ǿ��� ���������� ������� �ʴ´�.
int main() {
	int number = 3;
	const int NUMBER = 5;	//�ɺ��� ��� ����
	number = 10;	//������ ���� ������ �� �ִ�.
	//NUMBER =10;	//����� ���� ������ �� ����. ���� ������ ��� ������ ������ �߻��Ѵ�.

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);

	return 0;
}