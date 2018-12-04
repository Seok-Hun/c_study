/*2018-10-02 강석훈
입력받은 정수의 평균 출력(단, 먼저 몇개의 정수를 입력할 것인지 묻고 그만큼 입력받는다. 평균 값은 소수점 이하까지 계산*/
#include <stdio.h>

int main()
{
	int how, how2,num, sum = 0;
	float adv;
	printf("정수의 개수:");
	scanf_s("%d", &how);
	how2 = how;
	while (how > 0)
	{
		printf("정수 입력:");
		scanf_s("%d", &num);
		sum += num;
		how--;
	}
	adv = (float)sum / (float)how2;
	printf("평균 값:%f", adv);
	system("PAUSE");
}