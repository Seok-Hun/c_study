/*2018-10-02 ������
���� ���� �Է� �� �� ����ŭ 3�� ��� ���*/
#include <stdio.h>

int main()
{
	int num,N=1;
	scanf_s("%d", &num);
	while (num>0)
	{
		if (N % 3 == 0)
		{
			printf("%d\n", N);
			num--;
		}
		N++;

	}
	system("PAUSE");
}