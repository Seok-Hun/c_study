/*2018-10-02 ������
�ΰ��� ���� �Է� �� �� ������ �����Ͽ� ���̿� �����ϴ� �������� ���� ����ؼ� ���(ù��° �Է� ������ �ι�° �Է� �������� �۾ƾ� ��)*/
#include <stdio.h>

int main()
{
	int a, b,sum=0;
	scanf_s("%d%d", &a, &b);
	if (a > b)
	{
		printf("�ٽ��Է��Ͻÿ�");
		scanf_s("%d%d", &a, &b);
	}
	else
	{
		while (b >= a)
		{
			sum += b;
			b--;
		}
		printf("%d", sum);
	}
	system("PAUSE");
}