#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char character;
	int inum;
	float fnum;

	scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	//scanf �Լ��� ��� ����� ���ϰ� ���� �ʴ´�. ����� printf �Լ��� �̿��Ѵ�.
	printf("%c %d %f \n", character, inum, fnum);

	return 0;
}