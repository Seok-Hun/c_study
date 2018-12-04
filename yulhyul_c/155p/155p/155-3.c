/*2018-10-02 강석훈
입력받은 정수들을 더해서 0을 입력받을 때 합을 출력*/
#include <stdio.h>

int main()
{
	int num,sum=0;
	while (1)
	{
		scanf_s("%d", &num);
		if (num == 0)
			break;
		sum += num;
	}
	printf("%d", sum);
	system("PAUSE");
}