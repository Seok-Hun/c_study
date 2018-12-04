/*2018-09-18 강석훈
94p 재산 관리하기(입력 금액 수 증가)*/
#include <stdio.h>

int main()
{
	long int M;
	printf("매달 저축 금액을 입력하시오:");
	scanf_s("%ld", &M);
	printf("30년 후의 재산=%ld", M * 30);
	system("PAUSE");
}