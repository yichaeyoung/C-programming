#include <stdio.h>
#define __CRT_SECURE_NO_WARNINGS
int main() {
	float k, e, m, s1, s2;
	float result;
	
	k = 86, e = 75, m = 88, s1 = 60, s2 = 96;
	result = (k + e + m + s1 + s2) / 5;

	printf("짱구의 기말고사 평균 점수: %.1f\n", result);
	



		return 0;
}
