#include<stdio.h>
int main() {
	int num = 10;
	num++;

	printf("%d\n", num);
	printf("%d\n", num+3);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num);

	return 0;
}