#include <stdio.h>
/*
	* Project content：使用筛选法筛选100内的质数
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/

int main(int agrc, char* argv)
{
	int nScope = 100;
	printf("\n");
	//循环100内所有的数字
	for (int i = 2; i < nScope; i++)
	{
		//首先排除 10以内的所有质数
		if (i == 2 || i == 3 || i == 5 || i == 7)
		{
			printf("%d ", i);
		}
		else
		{
			//100以内所有的数与10以内的数进行相除、能够整除则不是质数
			for (int a = 2; a < 10; a++)
			{
				if (i % a == 0)
				{
					break;
				}
				//判断除到9还未被整除则判断为质数
				else if (a == 9)
				{
					printf("%d ", i);
				}
			}
		}	
	}
	printf("\n");
	return 0;
}