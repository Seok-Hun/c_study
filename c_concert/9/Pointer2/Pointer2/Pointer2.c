//2018-11-20 ���� ���� �����ڸ� �̿��� ������ �� ����

#include <stdio.h>

int main()
{
	int number = 10;
	int *p;

	p = &number;
	printf("���� number�� �� = %d\n", number);

	*p = 20;
	printf("���� number�� �� = %d\n", number);

	system("PAUSE");
}