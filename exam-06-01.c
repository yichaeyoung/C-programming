#include <stdio.h>
int main() {
	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;
	printf("result1: %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result2: %d\n", result);
	
	result = num1 > num2 && num1 == num2;
	printf("result3: %d\n", result);


	return 0;
}