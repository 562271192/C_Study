#include <Fun.h>

void main(int argc , char* argv[]) 
{
//第.题
/*
	printf("%d",Fibonacci(5));
*/

//第..题
/*
	printf("%d", Fac(5));

*/

//第一题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n",num);
	InpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] > Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}
		 
	}
	ShowArr(Arr, num);                             //输出数组

*/

//第二题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] < Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}

	}
	ShowArr(Arr, num);                             //输出数组
*/

//第三题
/*
	int Arr[10] = { 2,4,6,8,10,12,14,16,18,20};
	//int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	//printf("输入%d个整数!\n", num);
	//InpArr(Arr, num);                               //输入数组
	ReShowArr(Arr, num);                             //输出数组

*/



//第四题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	int sun = 0;
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                                    //输入数组
	//for (int i = 0; i < num; i++)
	//{
	//	sun = Arr[i] + sun;
	//}
	//printf("数组之和为：%d", sun);
	printf("数组之和为：%d", SunArr(Arr, num));
	
*/

//第五题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	int sun = 0;
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                                    //输入数组
	//for (int i = 0; i < num; i++)
	//{
	//	sun = Arr[i] + sun;
	//}
	//printf("数组之和为：%d", sun);
	printf("平均数为：%d",SunArr(Arr, num)/num);
*/

//第六题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] < Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}

	}
	printf("最大数为:%d",Arr[0]);
*/


//第七题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] < Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}

	}
	printf("最小数为:%d", Arr[num-1]);
*/

//第八题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] < Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}

	}
	printf("最大的3个数为：");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", Arr[i]);
	}
*/


//第九题
/*
	int Arr[10];
	int tmp = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] < Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}

	}
	printf("最小的3个数为：");
	for (int i = num-1; i >= num-3; i--)
	{
		printf("%d ", Arr[i]);
	}
*/

//第十题
/*
	int Arr[10];
	int tmp = 0, sun = 0 , mean = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                                    //输入数组
	//for (int i = 0; i < num; i++)
	//{
	//	sun = Arr[i] + sun;
	//}
	//printf("数组之和为：%d", sun);
	mean = SunArr(Arr, num) / num;
	printf("平均数为%f,大于平均数的有：",mean);
	for (int i = 0; i < num - 1; i++)
	{
		if (Arr[i] > mean)
		{
			printf("%d ", Arr[i]);
		}
	}
*/

//第十一题
/*
	int Arr[10];
	int tmp = 0, sun = 0, mean = 0;
	int num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个整数!\n", num);
	InpArr(Arr, num);                                    //输入数组
	for (int i = 0; i < num; i++)
	{
		if (Arr[i] == 1 || Arr[i] == 2)
		{
			printf("%d ", Arr[i]);
		}
		else
		{

			for (int x = 2; x <= Arr[i] / 2; x++)
			{
				if (Arr[i] % x == 0)
				{
					break;
				}
				if ( x == Arr[i] / 2 &&  Arr[i]  % x != 0)
				{
					printf("%d ", Arr[i]);
				}
			}
		}

	}
*/

//第十二题
/*
	float Arr[10];
	float tmp = 0 , sun = 0;
	float num = sizeof(Arr) / sizeof(Arr[0]);
	printf("输入%d个分数!\n", num);
	FinpArr(Arr, num);                               //输入数组
	for (int x = 0; x < num - 1; x++)
	{
		for (int y = 0; y < num - x; y++)
		{
			if (Arr[x] < Arr[x + y])
			{
				tmp = Arr[x];
				Arr[x] = Arr[x + y];
				Arr[x + y] = tmp;
			}
		}

	}
	printf("中间的分数为：");
	for (int i = 1; i < num - 1; i++)
	{
		sun += Arr[i];
	}
	sun = sun / (num-2);
	printf("%.1f ", sun);
*/

//十三题
/*
	int x = 0, i = 0;
	int a[10];
	float num = sizeof(a) / sizeof(a[0]);
	InpArr(a, num);                                    //输入数组
	printf("请猜一个数>>:");
	scanf_s("%d", &x);
	for (i = 0; i < 10; i++)
	{
		if (x == a[i])
		{
			printf("下角标为：%d", i);
			break;
		}
		else if (i == 9 && i != a[9])
		{
			printf("-1");
		}
	}
*/

//十四题
/*
	int i, j, z, tmp;
	int a[6] = { 10,20,30,40,50 };
	printf("请输入一个整数>>:");
	scanf_s("%d", &a[5]);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

			}
		}
	}
	for (z = 0; z < 6; z++)
	{
		printf("%d、", a[z]);
	}
*/

//十五题
/*
	int Arr[10] = { 1,10,15,18,19,55,56,88,99,101 };
	int x, i;
	printf("请输入随机数>>:");
	scanf_s("%d", &x);
	for (i = 0; i < 10; i++)
	{
		if (x == Arr[i])
		{
			printf("数组中有此参数！!!");
			break;
		}
		else if (i == 9 && x != Arr[i])
		{
			printf("数组中无此参数！！");
		}
	}
*/
	return 0;
}	

