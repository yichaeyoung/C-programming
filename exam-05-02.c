#include <stdio.h>

int main() {
	int num1 = 3, num2 = 4;

	//복합 대입 연산자를 통한 초기화
	num1 += 3;//num1 = num1+3;
	num2 *= 4;//num2=num2*4;

	printf("num1+=3의 결과: %d\n", num1);
	printf("num2*=4의 결과: %d\n", num2);

}
