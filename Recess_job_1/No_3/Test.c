#include <stdio.h>

void  Volume(float r , float h)
{
	float t = 3.14;
	printf("圆柱的体积为:%g", (r * r * t) * h);
}

void  V_Init()
{
	float r = 0, h = 0, V = 0;
	printf("请输入圆柱的半径和高：");
	scanf_s("%f%f", &r, &h);
	Volume(r, h);
}

void main(int argc, char* argv[])
{
	V_Init();
	return 0;
}