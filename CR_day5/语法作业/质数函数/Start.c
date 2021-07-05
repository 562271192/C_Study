#include <stdio.h>
#include <math.h>
/*
	* Project content：写一个函数int prime(int x)，如果x是素数返回值为1，否则返回0。并用主函数验证它。 
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/
//判断是否为质数（x是素数返回值为1，否则返回0）
int prime(int x)
{
	int a = 0;
	//求数的平方根
	a = (int)sqrt((float)(x));
	for (int i = 2; i <= a; i++)
	{
		if (x % i == 0)
		{
			return 1;
		}
		else if (i == a)
		{
			return 0;
		}
	}
}
int main(int argc, char* argv[])
{
	int t = 0, x = 25;
	if (prime(x) == 1)
	{
		printf("This is a prime number");
	}
	else
	{
		printf("This is not a prime number");
	}
	return 0;
}