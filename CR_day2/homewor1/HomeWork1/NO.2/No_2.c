#include <stdio.h>
/*
	* Project content：选择一种方法编写一个程序，实现输入六个数输出最小数。
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	int num[6];
	int temp = 0;
	int i = 0, y = 1;
	for (i = 0; i < 6; i++)
	{
		scanf("%d",	&num[i]);
	}
	temp = num[0];
	for (y = 1; y < 6; y++)
	{
		if(temp > num[y])
		{
			temp = num[y];
		}
	}
	printf("Min: %d\n", temp);
	system("pause");

	return 0;
}
