/*2018-09-18 강석훈
103p 태양빛 도달 시간*/
#include <stdio.h>

int main()
{
	float speed = 300000, W = 149600000;
	printf("빛의 속도는 %f\n", speed);
	printf("태양과 지구와의 거리: %f\n", W);
	printf("도달 시간은 %f\n", W / speed/60);
	system("PAUSE");
}