/*2018-09-18 ������
105p ȭ���µ� ��ȯ�ϱ�*/
#include <stdio.h>

int main()
{
	double H, C;
	printf("ȭ���µ�=");
	scanf_s("%lf", &H);
	C = (H - 32.0)*5.0 / 9.0;
	printf("�����µ�=%lf\n", C);
	system("PAUSE");
}