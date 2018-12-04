/*2018-09-18 강석훈
158p 6번*/

#include<stdio.h>

int main()
{
	float a, b;
	int sum;
	printf("2개의 실수를 입력하시오.");
	scanf_s("%f %f", &a, &b);
	sum = (int)a + (int)b;
	printf("합의 정수부=%d", sum);
	system("PAUSE");
}