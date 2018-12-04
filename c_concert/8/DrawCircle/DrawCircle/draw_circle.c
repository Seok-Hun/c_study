//2018-11-14 ��� �Լ��� ���ɿ� �׸���

#include <windows.h>
#include <stdio.h>
HDC hdc;

void draw_circle(int x, int y, double radius)
{
	Ellipse(hdc, (int)(x - radius), (int)(y - radius), (int)(x + radius), (int)(y + radius));

	if (radius > 2.0)   //�������� 2.0 �̻��̸�
	{
		radius *= 0.75; //�������� ���δ�.
		draw_circle(x, y, radius); //����Լ�
	}
}

int main()
{
	hdc = GetWindowDC(GetForegroundWindow());
	draw_circle(300, 200, 200.0);
	system("PAUSE");
}