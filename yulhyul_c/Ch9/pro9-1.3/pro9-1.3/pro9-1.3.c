//2018-11-13 ���ڷ� ���޵� ����ŭ�� �Ǻ���ġ�� ����ϴ� �Լ� ����.

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
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	Fibo(x);
	system("PAUSE");
}