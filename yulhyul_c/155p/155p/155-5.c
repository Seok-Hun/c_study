/*2018-10-02 ������
�Է¹��� ������ ��� ���(��, ���� ��� ������ �Է��� ������ ���� �׸�ŭ �Է¹޴´�. ��� ���� �Ҽ��� ���ϱ��� ���*/
#include <stdio.h>

int main()
{
	int how, how2,num, sum = 0;
	float adv;
	printf("������ ����:");
	scanf_s("%d", &how);
	how2 = how;
	while (how > 0)
	{
		printf("���� �Է�:");
		scanf_s("%d", &num);
		sum += num;
		how--;
	}
	adv = (float)sum / (float)how2;
	printf("��� ��:%f", adv);
	system("PAUSE");
}