#include <stdio.h>

int main() {
	char cnum = 128;
	unsigned char u_cnum = 128;
	short snum = 32768;	//short���� �ִ��� 32767�̴�.
	unsigned short u_snum = 32768;

	printf("%d\n", cnum);
	printf("%d\n", u_cnum);
	printf("%d\n", snum);
	printf("%d\n", u_snum);

	return 0;
}