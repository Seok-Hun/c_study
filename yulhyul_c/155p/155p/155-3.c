/*2018-10-02 ������
�Է¹��� �������� ���ؼ� 0�� �Է¹��� �� ���� ���*/
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