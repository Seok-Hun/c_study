/*2018-09-18 ������
158p 5��*/
#include<stdio.h>

int main()
{
	float x;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%f", &x);
	printf("������ ���� %0.6f�Դϴ�.", (x*x*x - 20) / (x - 7));
	system("PAUSE");
}