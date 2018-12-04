/*2018-09-18 강석훈
94p 재산 계산하기*/
#include <stdio.h>

int main()
{
	int M;
	printf("매달 저축 금액을 입력하시오:");
	scanf_s("%d", &M);
	printf("30년 후의 재산: %d\n", M * 30);
	system("PAUSE");
}