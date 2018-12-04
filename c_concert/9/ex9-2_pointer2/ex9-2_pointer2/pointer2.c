//2018-11-14 간접 참조 연산자(*)로 포인터가 가리키는 값 변경

#include <stdio.h>

int main()
{
	int number = 10;
	int *p;

	p = &number;
	printf("변수 number의 값 = %d\n", number);

	*p = 20;
	printf("변수 number의 값 = %d\n", number);

	system("PAUSE");
}