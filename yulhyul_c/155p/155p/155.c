/*2018-10-02 강석훈
입력된 정수만큼 Hello World! 출력*/
#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	while (num > 0)
	{
		printf("Hello World!\n");
		num--;
	}
	system("PAUSE");
}