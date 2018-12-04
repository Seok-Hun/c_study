//2018-11-07 강석훈
//0부터9까지 난수를 100번 생성 후 가장 많이 생성된 수를 출력

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
	printf("가장 많이 생성된 수=%d\n", count);
	system("PAUSE");
}