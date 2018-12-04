/*2018-09-18 강석훈
75p 3번*/
#include <stdio.h>

int main() {
	int a, b, c;
	printf("정수를 입력하시오:");
	scanf_s("%d", &a);
	printf("정수를 입력하시오:");
	scanf_s("%d", &b);
	printf("정수를 입력하시오:");
	scanf_s("%d", &c);
	printf("평균은 %d입니다.\n", (a + b + c) / 3);
	system("PAUSE");
}