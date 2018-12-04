/*2018-10-02 강석훈
길이가 5인 배열을 선언해 5개의 정수를 입력, 최대,최소,합 출력*/
#include <stdio.h>

int main()
{
	int arr[5];
	int sum=0, i, a,b;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	a = arr[0];
	b = arr[0];
	for (i = 0; i < 5; i++)
	{
		if (a < arr[i])
		a = arr[i];
		if (b > arr[i])
		b = arr[i];
		sum += arr[i];
	}
	printf("최대:%d, 최소:%d 합 = %d", a, b,sum);
	system("PAUSE");
}