//2018-11-07 강석훈
//5개 정수 입력 후 1차원 배열에 저장 후 최대, 최솟값 계산 후 출력

#include <stdio.h>

int main()
{
	int num[5], max, min, i=0;

	do
	{
		printf("정수를 입력하시오:");
		scanf_s("%d", &num[i]);
		
		if (i == 0)
		{
			max = num[i];
			min = num[i];
		}
		else
		{
			if (num[i] > max)
				max = num[i];
			if (num[i] < min)
				min = num[i];
		}
		i++;
	} while (i < 5);
	printf("최대값=%d 최소값=%d\n", max, min);
	system("PAUSE");
}