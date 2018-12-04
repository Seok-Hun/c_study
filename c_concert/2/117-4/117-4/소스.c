/*2018-09-18 강석훈
117p 4번*/
#include<stdio.h>

int main()
{
	float M;
	printf("면적을 제곱미터 단위로 입력하시오:");
	scanf_s("%f", &M);
	printf("%0.2f제곱미터는 %0.2f평입니다.", M, M / 3.3058);
	system("PAUSE");
}