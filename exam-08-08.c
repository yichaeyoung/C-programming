#include <stdio.h>

int main() {
	int dan, mul;
	//´Ü¼ö for¹®
	for (dan = 2; dan < 10; dan++) {
		for (mul = 1; mul < 10; mul++)
			printf("%d ", dan * mul);
		printf("\n");
	}

	return 0;
}