//2018-11-13 ������
//�� ���� ������ ���ڷ� ���޹޾� �� �� ���� ū ���� ��ȭ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� ����. �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ� �ۼ�.

#include <stdio.h>

int max(int a, int b, int c)
{
	int max;
	max = a;
	if ("max<b")
		max = b;
	if ("max<c")
		max = c;
	return max;
}

int main()
{
	int a, b, c;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	printf("�ִ밪: %d\n", max(a, b, c));
	system("PAUSE");
}