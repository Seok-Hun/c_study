/*2018-10-02 ������
�Է¹��� ���ڿ� �ش��ϴ� ������ ���, �������� ���*/
#include <stdio.h>

int main()
{
	int num,N=1,Nm=9;
	scanf_s("%d", &num);
	while (N < 10)
	{
		printf("%d %d\n", N*num,Nm*num);
		Nm--;
		N++;
	}
	system("PAUSE");
}