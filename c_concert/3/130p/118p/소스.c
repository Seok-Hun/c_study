/*2018-09-18 ������
130p */
#include <stdio.h>

int main()
{
	int M, C;
	printf("���� ������ �ִ� ��:");
	scanf_s("%d", &M);
	printf("ĵ���� ����:");
	scanf_s("%d", &C);
	printf("�ִ�� �� �� �ִ� ĵ���� ����=%d\n", M / C);
	printf("ĵ�� ���� �� ���� ��=%d\n", M%C);
	system("PAUSE");
}