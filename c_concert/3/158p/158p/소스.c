/*2018-09-18 ������
158p 4��*/
#include <stdio.h>

int main()
{
	int num,H,T;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);
	H = num / 100;
	T = (num - 100 * H) / 10;
	printf("���� �ڸ���:%d\n", H);
	printf("���� �ڸ���:%d\n", T);
	printf("���� �ڸ���:%d\n", num - H * 100 - T * 10);
	system("PAUSE");
}