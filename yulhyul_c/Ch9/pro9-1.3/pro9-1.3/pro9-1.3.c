//2018-11-13 인자로 전달된 수만큼의 피보나치를 출력하는 함수 정의.

#include <stdio.h>

int Fibo(int x)
{
	int y = 0,z=1;
	if (x < 2)
		printf("0\n");
	else
	{
		for (int i = 0; i < x; i++)
		{
			if (i % 2 == 0)
			{
				printf("%d ", y);
				y += z;
			}
			else
			{
				printf("%d ", z);
				z += y;
			}

		}
		printf("\n");
	}
}

int main()
{
	int x;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &x);
	Fibo(x);
	system("PAUSE");
}