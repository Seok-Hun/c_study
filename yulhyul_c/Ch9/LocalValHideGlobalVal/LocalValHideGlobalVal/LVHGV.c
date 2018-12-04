//2018-11-13 동일한 이름의 전역변수와 지역변수 선언

#include<stdio.h>
int Add(int val);
int num = 1;

int main()
{
	int num = 5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num + 9);
	system("PAUSE");
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}