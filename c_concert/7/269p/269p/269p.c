#include <stdio.h>
#define SIZE 16

int main()
{
	int att_book[SIZE] = { 0 }, i;
	double check, count=0;

	for (i = 0; i < SIZE; i++)
	{
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0): ", i + 1);
		scanf_s("%d", &att_book[i]);
		if (att_book[i] == 0)
			count++;
	}
	check = count / SIZE * 100;
	if (check >= 30)
		printf("���� �ϼ� �����Դϴ�(%f)\n", check);
	else
		printf("���� �ϼ��� ä�����ϴ�.\n");
	system("PAUSE");
}