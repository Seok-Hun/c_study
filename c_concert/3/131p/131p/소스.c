/*2018-09-18 ������
131p �ڵ��Ǹű�*/
#include <stdio.h>

int main()
{
	int M, P,H;
	printf("������ ��:");
	scanf_s("%d", &M);
	printf("���ǰ�:");
	scanf_s("%d", &P);
	printf("�Ž�����: %d\n", M - P);

	printf("100�� ������ ����: %d\n", (M - P) / 100);
	H = (M - P) / 100;
	printf("10�� ������ ����: %d\n", ((M - P) - 100 * H) / 10);
	system("PAUSE");
}