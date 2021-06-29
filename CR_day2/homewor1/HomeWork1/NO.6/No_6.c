#include <stdio.h>
/*
	* Project content：已知a=3，b=2，c=2.5，计算(float)(a+b)/3+(int)c的值。 
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	int  a = 3 , b = 2;
	float c = 2.5;
	printf(" Number:%f\n", (float)(a+b)/3+(int)c);
	system("pause");
	return 0;
}
