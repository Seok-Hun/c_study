/*2018-09-18 ������
159p 7��*/
#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2, y1, y2;
	printf("ù��° ��(x1,y1):");
	scanf_s("%f %f", &x1, &y1);
	printf("�ι�° ��(x2,y2):");
	scanf_s("%f %f", &x2, &y2);
	printf("Distance=%f", sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
	system("PAUSE");
}