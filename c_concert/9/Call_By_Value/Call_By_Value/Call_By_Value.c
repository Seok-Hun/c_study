//2018-11-20 ���� ���� ȣ��

#include <stdio.h>

void modify(int value)
{
	value = 99;
}

int main()
{
	int number = 1;

	modify(number);
	printf("number = %d\n", number);

	system("PAUSE");
}