//2018-11-13 ������
//���� �µ��� �Է��� ȭ�� �µ��� ��ȯ�ϴ� CelToFah �Լ��� �ݴ�� ȭ�� �µ��� �Է��� ���� �µ��� ��ȯ�ϴ� FahToCel �Լ��� ���� �� ȣ��.

#include <stdio.h>

double CelToFah(int C)
{
	return 1.8*(double)C + 32;
}

double FahToCel(int F)
{
	return ((double)F - 32) / 1.8;
}

int main()
{
	int CF, T;

	printf("������ ȭ���� ��ȯ�� 0�Է�\nȭ���� ������ ��ȯ�� 1�Է�: ");
	scanf_s("%d", &CF);
	printf("�µ��� �Է�: ");
	scanf_s("%d", &T);

	if (CF == 0)
		printf("ȭ��: %0.2lf\n", CelToFah(T));
	else if (CF == 1)
		printf("����: %0.2lf\n", FahToCel(T));
	system("PAUSE");
}