#include <stdio.h>
#include <string.h>
/*
	* Project content：从键盘输入10个数，求其中最大数和最小数并输出
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	//设置初始值
	int nNumber[10] = {0};
	int i = 0,nMax = -2147483648 , nMin = 0;
	//判断最大值
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &nNumber[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (nNumber[i] > nMax)
		{
			nMax = nNumber[i];
		}
	}
	//判断最小值
	nMin = nNumber[0];
	for (i = 1; i < 10; i++)
	{
		if (nNumber[i] < nMin)
		{
			nMin = nNumber[i];
		}
	}
	printf("Max:%d\nMin:%d\n", nMax,nMin);

	system("pause");

	return 0;
}
