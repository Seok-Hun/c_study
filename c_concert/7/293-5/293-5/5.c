//2018-11-07 ������
//0����9���� ������ 100�� ���� �� ���� ���� ������ ���� ���

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[10] = { 0 }, max, i, count=0;

	for (i = 0; i < 100; i++)
		num[rand()%10]++;
	max = num[0];
	for (i = 1; i < 10; i++)
		if (num[i] > max)
		{
			max = num[i];
			count = i;
		}
	printf("���� ���� ������ ��=%d\n", count);
	system("PAUSE");
}