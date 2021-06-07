#include <stdio.h>

//输入数组
void InpArr(int Arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("请输入%d个整数:", i + 1);
		scanf_s("%d", &Arr[i]);
	}
}


//  输出数组
void ShowArr(int Arr[], int num)
{
	for (int z = 0; z < num; z++)
	{
		printf("%d ", Arr[z]);
	}
}







// 用递归算法编写求斐波那契数列第20项值的函数fib(int n)，并用主函数输出它的前20项来验证该函数
int Fibonacci(int rumber)
{
	if (rumber == 2 || rumber == 1)
	{
		return 1;
	}
	int result = Fibonacci(rumber - 1) + Fibonacci(rumber - 2);
	//printf("%d ", result);
	return result;
}



//.用递归算法求10的阶乘。
int Fac(int rumber)
{
	if (rumber == 1)
	{
		return 1;
	}
	int result = rumber * Fac(rumber - 1);
	//printf("%d ", result);
	return result;
}


//第三题
//逆向输出数组
void ReShowArr(int Arr[], int num)
{
	for (int z = num-1 ; z >= 0; z--)
	{
		printf("%d ", Arr[z]);
	}
}



//第四题
//数组之和
int SunArr(int Arr[], int num)
{
	int sun = 0;
	for (int i = 0; i < num; i++)
	{
		sun += Arr[i];
	}
	return sun;
}	


void FinpArr(float Arr[], float num)
{
	for (int i = 0; i < num; i++)
	{
		printf("请输入%d个整数:", i + 1);
		scanf_s("%f", &Arr[i]);
	}
}
