#include <stdio.h>
/*
	* Project content：写一个函数power(double x, int n)，其返回值为xn，并用此函数计算1.5^3。
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/
//实现1.5的3次方
double power(double x, int n)
{
	double dbtemp = 1;
	for (int i = 0; i < n; i++)
	{
		dbtemp = x * dbtemp;
	}
	return dbtemp;
}
int main(int argc, char* argv[])
{
	double dbNumber = 1.5;
	printf("%g", power(dbNumber, 3));
}