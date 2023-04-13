#include <stdio.h>

int main() {
	int a, b;
	a = 1;
	b = a << 2;
	printf("%d << 2 = %d\n", a, b);
	b = a >> 2;
	printf("%d >> 2 = %d\n", a, b);

	return 0;
}