/*2018-09-18 강석훈
158p 4번*/
#include <stdio.h>

int main()
{
	int num,H,T;
	printf("정수를 입력하시오:");
	scanf_s("%d", &num);
	H = num / 100;
	T = (num - 100 * H) / 10;
	printf("백의 자리수:%d\n", H);
	printf("심의 자리수:%d\n", T);
	printf("일의 자리수:%d\n", num - H * 100 - T * 10);
	system("PAUSE");
}