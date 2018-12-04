//2018-11-14 포인터 연산

#include <stdio.h>

int main()
{
	char *pc;
	int *pi;
	double *pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	pc += 1;
	pi += 1;
	pd += 1;
	printf("증가 후후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	system("PAUSE");
}