//2018-11-13 전역변수 선언

#include <stdio.h>
void Add(int val);
int num; //전역변수는 기본적으로 0으로 초기화

int main()
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++; //전역변수 num의 값 1증가
	printf("num: %d \n", num);
	system("PAUSE");
}

void Add(int val)
{
	num += val; //전역변수 num의 값 val만큼 증가
}