//2018-11-07 강석훈
//구구단을 2차원 배열에 저장, 구구단 하나를 입력 받아 2차원 배열에서 검색 후 출력

#include <stdio.h>

int main()
{
	int mul[9][9];
	int x, y;

	for (int i = 1; i < 10; i++)
		for (int j = 1; j < 10; j++)
			mul[i-1][j-1] = i * j;
	printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
	scanf_s("%d%d", &x, &y);

	printf("%dX%d=%d\n", x, y, mul[x-1][y-1]);
	system("PAUSE");
}