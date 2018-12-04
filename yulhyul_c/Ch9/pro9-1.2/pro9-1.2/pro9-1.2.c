//2018-11-13 강석훈
//섭씨 온도를 입력해 화씨 온도를 반환하는 CelToFah 함수와 반대로 화씨 온도를 입력해 섭씨 온도를 반환하는 FahToCel 함수를 정의 후 호출.

#include <stdio.h>

double CelToFah(int C)
{
	return 1.8*(double)C + 32;
}

double FahToCel(int F)
{
	return ((double)F - 32) / 1.8;
}

int main()
{
	int CF, T;

	printf("섭씨를 화씨로 변환시 0입력\n화씨를 섭씨로 변환시 1입력: ");
	scanf_s("%d", &CF);
	printf("온도를 입력: ");
	scanf_s("%d", &T);

	if (CF == 0)
		printf("화씨: %0.2lf\n", CelToFah(T));
	else if (CF == 1)
		printf("섭씨: %0.2lf\n", FahToCel(T));
	system("PAUSE");
}