#include <stdio.h>
#include <stdbool.h>
/*
	* Project content：递归求一个数为质数，返回布尔值。
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/
bool Prime(int n, int* pN); // 判断是否为质数的函数
int main(int argc, char* argv[])
{
		//初始化数值
		int n = 5;
		int* pN = &n;
		printf("Number:");
		scanf_s("%d", &n);
		//判定输入数字是否为质数
		if (n == 1)
		{
			printf("Resume load\n");
		}
		else if (Prime((n - 1), pN) == true)
		{
			printf("%d:This is a prime\n", n);
		}
		else if (Prime((n - 1), pN) == false)
		{
			printf("%d:Is not a prime number\n", n);
		}
	return 0;
}

//判断是否为质数
bool Prime(int n, int* pN)
{
	int i = *pN;
	if (i == 2)
	{
		return true;
	}
	else if (i % n == 0)
	{
		//printf("%d", i);
		//printf("%d", n);
		return false;
	}
	else if (n == 2)
	{
		return true;
	}
	Prime(n - 1, pN);
}