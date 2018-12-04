#include <stdio.h>
#define SIZE 10

int main()
{
	int prices[SIZE] = { 12,3,19,6,18,8,12,4,1,19 }, min, i;

	min = prices[0];
	for (i = 0; i < SIZE; i++)
		if (prices[i] < min)
			min = prices[i];
	printf("최소값은 %d입니다.\n", min);
	system("PAUSE");
}