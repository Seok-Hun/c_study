/*2018-10-02 강석훈
양의 정수 입력 후 그 수만큼 3의 배수 출력*/
#include <stdio.h>

int main()
{
	int num,N=1;
	scanf_s("%d", &num);
	while (num>0)
	{
		if (N % 3 == 0)
		{
			printf("%d\n", N);
			num--;
		}
		N++;

	}
	system("PAUSE");
}