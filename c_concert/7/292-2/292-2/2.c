//2018-11-07 ������
//5�� ���� �Է� �� 1���� �迭�� ���� �� �ִ�, �ּڰ� ��� �� ���

#include <stdio.h>

int main()
{
	int num[5], max, min, i=0;

	do
	{
		printf("������ �Է��Ͻÿ�:");
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
	printf("�ִ밪=%d �ּҰ�=%d\n", max, min);
	system("PAUSE");
}