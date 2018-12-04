//2018-11-13 지역변수에 static 선언 추가로 static 변수 생성

#include <stdio.h>

void SimpleFunc()
{
	static int num1 = 0; //초기화하지 않으면 0초기화
	int num2 = 0; //초기화하지 않으면 쓰레기 값 초기화
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main()
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	system("PAUSE");
}