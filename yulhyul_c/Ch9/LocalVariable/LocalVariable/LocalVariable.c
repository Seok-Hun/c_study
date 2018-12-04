//2018-11-13 지역변수 선언

#include <stdio.h>

int SimpleFuncOne()
{
	int num = 10; //이후부터 SimpleFuncOne의 num 유효
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0;
}

int SimpleFuncTwo()
{
	int num1 = 20; //이후부터 num1유효
	int num2 = 30; //이후부터 num2유효
	num1++, num2++;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;
}

int main()
{
	int num = 17; //이후부터 main의 num 유효
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	system("PAUSE");
}