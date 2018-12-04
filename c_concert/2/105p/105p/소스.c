/*2018-09-18 °­¼®ÈÆ
105p È­¾¾¿Âµµ º¯È¯ÇÏ±â*/
#include <stdio.h>

int main()
{
	double H, C;
	printf("È­¾¾¿Âµµ=");
	scanf_s("%lf", &H);
	C = (H - 32.0)*5.0 / 9.0;
	printf("¼·¾¾¿Âµµ=%lf\n", C);
	system("PAUSE");
}