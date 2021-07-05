#include <stdio.h>
/*
	* Project content：求1到10共10个数中取出3个不同的数，共有多少种组合方式？
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/

//阶乘函数
int Factorial(int x)
{
	int iTemp = 1;
	for (int i = 1; i < x; i++)
	{
		iTemp = iTemp * i;
	}
	return iTemp;
}


int main(int argc, char* argv[])
{
	int iFac = 0, iSum = 0, m = 10, n =3;
	//实现算法： 总数 = m! / (n! * (m - n)!)
	iSum = Factorial(m)/ (Factorial(n)* Factorial(m - n));
	printf("Sum = %d\n", iSum);
}