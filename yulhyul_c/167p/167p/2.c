/*2018-10-02 ������
���丮�� ���α׷� �ۼ�*/
#include <stdio.h>

int main()
{
	int a, f;
	scanf_s("%d", &a);
	f = a;
	for (a; a > 1; a--)
	{
		f = f * (a-1);
	}
	printf("%d", f);
	system("PAUSE");
}