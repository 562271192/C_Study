#include <stdio.h>
/*
	* Project content：编程说明long double、long int和double long它们在内存中的区别
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	long double x = 127;  // 8
	long int y = 68;     //  4
	double long  z = 38; //  8
	printf("%p\n", &x );
	printf("%p\n", &y );
	printf("%p\n", &z );
	getchar();
	return 0;
}
