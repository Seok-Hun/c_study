//2018-11-13 ����Լ�

#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0) //����� Ż������
		return;
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
}

int main()
{
	Recursive(3);
	system("PAUSE");
}