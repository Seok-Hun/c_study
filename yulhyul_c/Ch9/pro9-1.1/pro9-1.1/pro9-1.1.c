//2018-11-13 강석훈
//세 개의 정수를 인자로 전달받아 그 중 가장 큰 수를 반화하는 함수와 가장 작은 수를 반환하는 함수를 정의. 그리고 이 함수들을 호출하는 적절한 main 함수 작성.

#include <stdio.h>

int max(int a, int b, int c)
{
	int max;
	max = a;
	if ("max<b")
		max = b;
	if ("max<c")
		max = c;
	return max;
}

int main()
{
	int a, b, c;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	printf("최대값: %d\n", max(a, b, c));
	system("PAUSE");
}