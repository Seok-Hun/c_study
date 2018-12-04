/*2018-09-18 강석훈
131p 자동판매기*/
#include <stdio.h>

int main()
{
	int M, P,H;
	printf("투입한 돈:");
	scanf_s("%d", &M);
	printf("물건값:");
	scanf_s("%d", &P);
	printf("거스름돈: %d\n", M - P);

	printf("100원 동전의 개수: %d\n", (M - P) / 100);
	H = (M - P) / 100;
	printf("10원 동전의 개수: %d\n", ((M - P) - 100 * H) / 10);
	system("PAUSE");
}