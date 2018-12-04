/*2018-09-18 강석훈
107p 원의 면적을 계산*/
#include <stdio.h>
#define PI 3.141592

int main()
{
	double r;
	printf("원의 반지름을 입력사시오:");
	scanf_s("%lf", &r);
	printf("원의 면적:%lf\n", r*r*PI);
	system("PAUSE");
}