//20118-11-07 ������
//�л����� ������ 2���� �迭�� ���� �� ��� ���� ���

#include <stdio.h>

int main()
{
	int score[3][3] = { {30,10,11},{40,90,32},{70,65,56} };
	int sum = 0, ave[3];
	int i, j;

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
			sum += score[j][i];
		ave[j] = sum / 3;
		sum = 0;
	}
	for (i = 0; i < 3; i++)
		printf("%d�� �л��� ���: %d\n", i + 1, ave[i]);
	system("PAUSE");
}