#include <stdio.h>

int main() {
	float fnum = 1.234567;
	printf("%10f\n", fnum);
	printf("%-10f\n", fnum);
	printf("%10.3f\n", fnum);
	printf("%-10.3f\n", fnum);

	return 0;
}