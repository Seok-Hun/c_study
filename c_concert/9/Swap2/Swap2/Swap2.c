//2018-11-20 포인터를 이용한 함수 변수 수정

#include <stdio.h>
void swap(int *px, int *py);

int main()
{
	int a = 100, b = 200;

	printf("swap() 호출전 a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("swap() 호출후 a=%d b=%d\n", a, b);

	system("PAUSE");
}

void swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}