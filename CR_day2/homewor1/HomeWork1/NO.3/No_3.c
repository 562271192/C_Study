#include <stdio.h>
/*
	* Project content：编写一个程序，从键盘上输入华氏温度，屏幕显示对应的摄氏温度。华氏温度和摄氏温度的转换公式为： c=(f-32)/1.8 。
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	float f = 0;
	scanf("%f",&f);
	printf("Degree: %0.1f\n", (f-32)/1.8);
	system("pause");
	return 0;
}
