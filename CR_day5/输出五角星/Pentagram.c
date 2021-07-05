#include <stdio.h>
/*
	* Project content：打印五角星
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/

int main(int argc, char* argv[])
{
	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 50; j++)
		{
			if (  j == -13 * i / 15 + 24
				|| j == 18 * i / 19 + 24
				|| i == 6 && j % 2 == 0
				|| j == 42 * i / 13 - 21
				|| j == -42 * i / 13 + 70)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}