//2018-11-14 재귀 함수로 동심원 그리기

#include <windows.h>
#include <stdio.h>
HDC hdc;

void draw_circle(int x, int y, double radius)
{
	Ellipse(hdc, (int)(x - radius), (int)(y - radius), (int)(x + radius), (int)(y + radius));

	if (radius > 2.0)   //반지름이 2.0 이상이면
	{
		radius *= 0.75; //반지름을 줄인다.
		draw_circle(x, y, radius); //재귀함수
	}
}

int main()
{
	hdc = GetWindowDC(GetForegroundWindow());
	draw_circle(300, 200, 200.0);
	system("PAUSE");
}