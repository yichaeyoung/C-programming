#include <stdio.h>
int main() {
	char character = 'H';
	int num = 548;
	printf("%5c\n", character);
	printf("%-5c\n", character);
	printf("%10d\n", num);
	printf("%-10d\n", num);
}