//2018-11-13 ���������� static ���� �߰��� static ���� ����

#include <stdio.h>

void SimpleFunc()
{
	static int num1 = 0; //�ʱ�ȭ���� ������ 0�ʱ�ȭ
	int num2 = 0; //�ʱ�ȭ���� ������ ������ �� �ʱ�ȭ
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main()
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	system("PAUSE");
}