/*2018-10-02 강석훈
0이상 100이하의 정수 중에서 짝수의 합을 출력(단, do~while문 기반)*/
#include <stdio.h>

int main()
{
	int sum = 0,num=2;
	do
	{
		sum += num;
		num += 2;
	} while (num <= 100);
	printf("짝수의 합:%d\n", sum);
	system("PAUSE");
}