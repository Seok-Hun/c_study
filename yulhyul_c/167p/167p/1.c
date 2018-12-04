/*2018-10-02 강석훈
두개의 정수 입력 후 두 정수를 포함하여 사이에 존재하는 정수들의 합을 계산해서 출력(첫번째 입력 정수가 두번째 입력 정수보다 작아야 함)*/
#include <stdio.h>

int main()
{
	int a, b,sum=0;
	scanf_s("%d%d", &a, &b);
	if (a > b)
	{
		printf("다시입력하시오");
		scanf_s("%d%d", &a, &b);
	}
	else
	{
		while (b >= a)
		{
			sum += b;
			b--;
		}
		printf("%d", sum);
	}
	system("PAUSE");
}