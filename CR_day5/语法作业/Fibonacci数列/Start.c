#include <stdio.h>
#include <math.h>
/*
	* Project content：用递归算法编写求Fibonacci数列第n项值的函数fib(int n)，
					   并用主函数输出它的前20项来验证该函数。
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main(int argc, char* argv[])
{
	for (int i = 1; i <= 20; i++)
	{
		printf("%d ", fib(i));
	}
	return 0;
}