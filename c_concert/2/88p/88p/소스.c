/*2018-09-18 강석훈
88p 오버플로우*/
#include <stdio.h>

int main()
{
	short money = 32767; //short의 범위: -32,768 ~ 32767

	money = money + 1;
	printf("money:%d\n", money); //최대범위 초과시 처음 범위로 되돌아감
	system("PAUSE");
}