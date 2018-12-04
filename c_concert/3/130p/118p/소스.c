/*2018-09-18 강석훈
130p */
#include <stdio.h>

int main()
{
	int M, C;
	printf("현재 가지고 있는 돈:");
	scanf_s("%d", &M);
	printf("캔디의 가격:");
	scanf_s("%d", &C);
	printf("최대로 살 수 있는 캔디의 개수=%d\n", M / C);
	printf("캔디 구입 후 남은 돈=%d\n", M%C);
	system("PAUSE");
}