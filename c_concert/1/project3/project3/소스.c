/*2018-9-18 ������
scanf ����*/
#include <stdio.h>

int main()
{
	int L, A, H, G;
	printf("������ ����ΰ�:");
	scanf_s("%d", &L);
	printf("�װ����� ����:");
	scanf_s("%d", &A);
	printf("ȣ���� 1�� ����:");
	scanf_s("%d", &H);
	printf("�Ϸ翡 �ʿ��� �뵷:");
	scanf_s("%d", &G);
	printf("---------------");
	printf("�� ���� ���:%d", L*(H + G) + A);
	system("PAUSE");
}