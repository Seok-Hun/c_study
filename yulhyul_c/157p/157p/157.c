/*2018-10-02 ������
5�� ���� �Է� �� �� ���� ���� ���(��, ������ 1�̻��̰� 1�̸� �Է� �� ���Է� �䱸)*/
#include <stdio.h>

int main(void)
{
	int num = 0,n,sum=0;
	while (num < 5)
	{
		scanf_s("%d", &n);
		if (n < 1)
		{
			printf("�ٽ��Է��ض�");
			num--;
		}
		sum += n;
		num++;
	}
	printf("%d", sum);
	system("PAUSE");
}