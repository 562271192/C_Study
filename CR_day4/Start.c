#include <stdio.h>
/*
	* Project content：打印五角星
	* Creating time: 2021-07-01
	* Founder: Jingjie
*/

int main(int argc, char* argv[])
{
	for (int y = 15; y >= 0; y--)
	{
		for (int x = 10; x >= 0; x--)
		{
			if (3 * x == y || -3 * x + 30 == y || y == 10 || -x + 10 == y || x == y)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}