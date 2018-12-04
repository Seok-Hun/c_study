/*2018-10-02 강석훈
팩토리얼 프로그램 작성*/
#include <stdio.h>

int main()
{
	int a, f;
	scanf_s("%d", &a);
	f = a;
	for (a; a > 1; a--)
	{
		f = f * (a-1);
	}
	printf("%d", f);
	system("PAUSE");
}