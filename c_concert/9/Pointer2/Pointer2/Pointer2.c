//2018-11-20 간접 참조 연산자를 이용한 포인터 값 변경

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