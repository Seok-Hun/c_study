//2018-11-20 배열의 포인터

#include <stdio.h>

int main()
{
	int a[] = { 10,20,30,40,50 };

	printf("배열의 이름 = %u\n", a);
	printf("첫 번째 원소의 주소 = %u\n", &a[0]);

	system("PAUSE");
}