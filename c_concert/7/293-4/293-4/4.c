//2018-11-07 ������
//�������� 2���� �迭�� ����, ������ �ϳ��� �Է� �޾� 2���� �迭���� �˻� �� ���

#include <stdio.h>

int main()
{
	int mul[9][9];
	int x, y;

	for (int i = 1; i < 10; i++)
		for (int j = 1; j < 10; j++)
			mul[i-1][j-1] = i * j;
	printf("�˰���� �������� �Է��Ͻÿ�(��: 9 3): ");
	scanf_s("%d%d", &x, &y);

	printf("%dX%d=%d\n", x, y, mul[x-1][y-1]);
	system("PAUSE");
}