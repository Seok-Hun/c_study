/*2018-09-18 강석훈
158p 5번*/
#include<stdio.h>

int main()
{
	float x;
	printf("정수를 입력하시오:");
	scanf_s("%f", &x);
	printf("수식의 값은 %0.6f입니다.", (x*x*x - 20) / (x - 7));
	system("PAUSE");
}