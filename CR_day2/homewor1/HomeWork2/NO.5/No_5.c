#include <stdio.h>
#include <math.h>
/*
	* Project content：输入三角形三个边的值(浮点型)，求其面积(海伦)
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	float x = 0, y = 0, z = 0, s = 0 , Are = 0;
	printf("please input a: ");
	scanf("%f%f%f",&x,&y,&z);
	s = (x + y + z)/2;
	Are = sqrt(s*(s-x)*(s-y)*(s-z));
	printf("Area: %f", Are);
	return 0;
}
