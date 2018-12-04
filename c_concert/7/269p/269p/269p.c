#include <stdio.h>
#define SIZE 16

int main()
{
	int att_book[SIZE] = { 0 }, i;
	double check, count=0;

	for (i = 0; i < SIZE; i++)
	{
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i + 1);
		scanf_s("%d", &att_book[i]);
		if (att_book[i] == 0)
			count++;
	}
	check = count / SIZE * 100;
	if (check >= 30)
		printf("수업 일수 부족입니다(%f)\n", check);
	else
		printf("수업 일수를 채웠습니다.\n");
	system("PAUSE");
}