/*2018-9-18 강석훈
scanf 연습*/
#include <stdio.h>

int main()
{
	int L, A, H, G;
	printf("여행은 몇박인가:");
	scanf_s("%d", &L);
	printf("항공권의 가격:");
	scanf_s("%d", &A);
	printf("호텔의 1박 가격:");
	scanf_s("%d", &H);
	printf("하루에 필요한 용돈:");
	scanf_s("%d", &G);
	printf("---------------");
	printf("총 여행 비용:%d", L*(H + G) + A);
	system("PAUSE");
}