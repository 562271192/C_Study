#include <stdio.h>
/*
	* Project content：计算100的阶乘
	* Creating time: 2021-07-01
	* Founder: Jingjie
*/

int main(int argc, char* argv[])
{
	double nNumber = 1;
	for (int i = 1; i < 101; i++)
	{
		nNumber  = nNumber * i;
	}
	printf("Number:%g\n", nNumber);
	return 0;
}