/*2018-09-18 ������
scanf_s ��� ����*/
#include <stdio.h>

int main()
{
	int a, b;
	printf("ù��° ���ڸ� �Է��Ͻÿ�.");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�.");
	scanf_s("%d", &b);
	printf("�� ���� ��: %d\n", a + b);
	system("PAUSE");
	return 0;
}