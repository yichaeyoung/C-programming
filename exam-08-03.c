#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	//무한루프가 적용된 실행문(강제 종료는 Ctrl+C를 입력)
	while (1) {
		printf("무한 반복중... 숫자를 입력하세요: ");
		scanf("%d", &num);
		printf("%d을(를) 입력하셨네요.\n", num);
	}
	return 0;
}