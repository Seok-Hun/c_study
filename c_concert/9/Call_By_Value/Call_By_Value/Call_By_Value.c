//2018-11-20 값에 의한 호출

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