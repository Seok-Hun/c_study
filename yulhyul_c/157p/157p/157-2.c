/*2018-10-02 ������
*
o*
oo*
ooo*
oooo*
�� ����Ͻÿ�*/

#include <stdio.h>

int main()
{
	int num=0,r=0;
	while (num < 5)
	{
		while (r < num)
		{
			printf("o");
			r++;
		}
		printf("*\n");
		r = 0;
		num++;
	}
	system("PAUSE");
}