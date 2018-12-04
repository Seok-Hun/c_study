/*2018-10-02 강석훈
입력받은 숫자에 해당하는 구구단 출력, 역순으로 출력*/
#include <stdio.h>

int main()
{
	int num,N=1,Nm=9;
	scanf_s("%d", &num);
	while (N < 10)
	{
		printf("%d %d\n", N*num,Nm*num);
		Nm--;
		N++;
	}
	system("PAUSE");
}