//2018-11-13 �������� ����

#include <stdio.h>

int SimpleFuncOne()
{
	int num = 10; //���ĺ��� SimpleFuncOne�� num ��ȿ
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0;
}

int SimpleFuncTwo()
{
	int num1 = 20; //���ĺ��� num1��ȿ
	int num2 = 30; //���ĺ��� num2��ȿ
	num1++, num2++;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;
}

int main()
{
	int num = 17; //���ĺ��� main�� num ��ȿ
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	system("PAUSE");
}