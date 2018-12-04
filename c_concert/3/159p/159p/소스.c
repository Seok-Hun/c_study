/*2018-09-18 강석훈
159p 7번*/
#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2, y1, y2;
	printf("첫번째 점(x1,y1):");
	scanf_s("%f %f", &x1, &y1);
	printf("두번째 점(x2,y2):");
	scanf_s("%f %f", &x2, &y2);
	printf("Distance=%f", sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
	system("PAUSE");
}