#include <stdio.h>

int main() {
	//변수의 선언
	int a = 10, b = 10;

	printf("a : %d\n", a);
	printf("a : %d\n", ++a);
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", b++);
	printf("b : %d\n", b);

	return 0;
}