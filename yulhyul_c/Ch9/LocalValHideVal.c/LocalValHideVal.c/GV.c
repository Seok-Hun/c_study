//2018-11-13 �������� ����

#include <stdio.h>
void Add(int val);
int num; //���������� �⺻������ 0���� �ʱ�ȭ

int main()
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++; //�������� num�� �� 1����
	printf("num: %d \n", num);
	system("PAUSE");
}

void Add(int val)
{
	num += val; //�������� num�� �� val��ŭ ����
}