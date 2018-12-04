/*2018-09-18 강석훈
scanf_s 사용 연습*/
#include <stdio.h>

int main()
{
	int a, b;
	printf("첫번째 숫자를 입력하시오.");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하시오.");
	scanf_s("%d", &b);
	printf("두 수의 합: %d\n", a + b);
	system("PAUSE");
	return 0;
}