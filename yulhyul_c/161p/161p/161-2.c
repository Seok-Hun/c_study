/*2018-10-02 ������
0�̻� 100������ ���� �߿��� ¦���� ���� ���(��, do~while�� ���)*/
#include <stdio.h>

int main()
{
	int sum = 0,num=2;
	do
	{
		sum += num;
		num += 2;
	} while (num <= 100);
	printf("¦���� ��:%d\n", sum);
	system("PAUSE");
}