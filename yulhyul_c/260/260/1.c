/*2018-10-02 ������
���̰� 5�� �迭�� ������ 5���� ������ �Է�, �ִ�,�ּ�,�� ���*/
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
	printf("�ִ�:%d, �ּ�:%d �� = %d", a, b,sum);
	system("PAUSE");
}