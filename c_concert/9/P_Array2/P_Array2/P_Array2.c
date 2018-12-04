//2018-11-20 포인터로 배열 가리키기

#include <stdio.h>

int main()
{
	int a[] = { 10,20,30,40,50 };
	int *p;

	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d \n", &a[0], &a[1], &a[2]);
	printf("p[0]=%d a[1]=%d a[2]=%d \n\n", &p[0], &p[1], &p[2]);

	system("PAUSE");
}