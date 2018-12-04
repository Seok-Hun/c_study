/*2018-10-02 강석훈
5개 정수 입력 후 그 수의 합을 출력(단, 정수는 1이상이고 1미만 입력 시 재입력 요구)*/
#include <stdio.h>

int main(void)
{
	int num = 0,n,sum=0;
	while (num < 5)
	{
		scanf_s("%d", &n);
		if (n < 1)
		{
			printf("다시입력해라");
			num--;
		}
		sum += n;
		num++;
	}
	printf("%d", sum);
	system("PAUSE");
}