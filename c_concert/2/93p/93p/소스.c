/*2018-09-18 강석훈
93p 달러를 원화로 계산*/
#include <stdio.h>

int main()
{
	int D;
	printf("달러화 금액을 입력하시오:");
	scanf_s("%d", &D);
	printf("달러화 %d달러는 %d원입니다.\n", D, D * 1120);
	system("PAUSE");
}