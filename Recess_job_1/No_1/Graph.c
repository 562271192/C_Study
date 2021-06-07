#include <stdio.h>

//第一题
void GraphNo1() 
{
	int n = 0, x = 0, y = 0;
	printf("请输入显示的位数：");
	scanf("%d", &n);
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= 5; y++)
		{
			printf("*");
		}
		printf("\n");
	}
}



//第二题
void GraphNo2() 
{
	int n = 0, x = 0, y = 0, i = 0;
	printf("请输入显示的位数：");
	scanf("%d", &n);
	for (n; n > 0; n--)
	{
		i = n - 1;
		for (y = 1; y <= 5; y++)
		{
			for (i; i > 0; i--)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}



//第三题
void GraphNo3() 
{
	int n = 0, x = 0, y = 0, z = 0, i = 0;
	printf("请输入显示的位数：");
	scanf("%d", &n);
	i = n;
	for (x = 1; x <= n; x++)
	{
		i--;
		for (y = 1; y <= i; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= 2 * x - 1; z++)
		{

			printf("*");
		}
		printf("\n");
	}
}



//第四题
void GraphNo4()
{
	int n = 0, x = 0, y = 0, z = 0, i = 0;
	printf("请输入显示的位数：");
	scanf("%d", &n);
	i = n;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x - 1; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= 2 * i - 1; z++)
		{
			printf("*");
		}
		i = i - 1;
		printf("\n");
	}
}


//第五题
void GraphNo5()
{
	int n = 0,x = 0,y = 0,z = 0,a = 6,i = 0;
	printf("请输入显示的位数：");
	scanf("%d",&n);
	i = n;
	for(x=1;x<=n;x++)
	{

		for(y=1;y<=i;y++)
		{
			printf(" ");
		}
		for(z=1;z<=a;z++)
		{
			printf("*");
		}
		i--;
		a = a+2;
		printf("\n");
	}
	return 0;
}



//第六题
void GraphNo6() 
{
	int n = 0, x = 0, y = 0, z = 0, a = 6, i = 0;
	printf("请输入显示的位数：");
	scanf("%d", &n);
	i = n;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= i; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= a; z++)
		{
			if (x == 1 || x == n || z == 1 || z == a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		a = a + 2;
		printf("\n");
	}
}

//第七题
void GraphNo7()
{
	int n = 5, x = 0, y = 0, z = 0, a = 6, i = 0;
	i = n;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= i; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= a; z++)
		{
			if (x == 1 || z == 1 || z == a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		a = a + 2;
		printf("\n");
	}
	i = n - 1;
	for (x = 1; x <= n - 1; x++)
	{

		for (y = 0; y <= x; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= 4 + 2 * i; z++)
		{
			if (z == 1 || z == 4 + 2 * i || x == n - 1) {
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		printf("\n");
	}
}

//第八题
void GraphNo8()
{
	int n = 5, x = 0, y = 0, z = 0, a = 6, i = 0;
	i = n;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= 2 * i - 1; z++)
		{
			if (z == 1 || z == 2 * i - 1 || x == n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		printf("\n");
	}
	i = n;
	for (x = 1; x <= n - 1; x++)
	{
		for (y = 1; y < i; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= 2 * x + 1; z++)
		{
			if (z == 1 || z == 2 * x + 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		printf("\n");
	}
}

//第九题
void GraphNo9()
{
	int n = 0, x = 0, y = 0, z = 0, a = 0;
	printf("请输入n的参数:");
	scanf("%d", &n);
	a = n - 1;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n - 1; y++)
		{
			if (x == 1 || x == n || y == a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		a--;
		printf("\n");
	}
}

//第十题
void GraphNo10()
{
	int n = 0, x = 0, y = 0, z = 0, a = 0;
	printf("请输入n的参数:");
	scanf("%d", &n);
	a = n / 2;
	z = n;
	for (a; a >= 1; a--)
	{
		for (x = 1; x <= z; x++)
		{
			if (x == 1 || x == z)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		z = z - 2;
		printf("\n");
	}
	a = n - n / 2;
	for (x = 1; x <= a; x++)
	{
		for (y = 1; y <= 2 * x - 1; y++)
		{
			if (y == 1 || y == 2 * x - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


//第十一题
void GraphNo11()
{
	int n = 0, x = 0, y = 0, z = 0;
	printf("请输入一个数字：");
	scanf("%d", &n);
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			if (y == 1 || y == n || x == y)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

}
//第十二题
void GraphNo12()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, mid = 0;
	printf("请输入奇数值：");
	scanf("%d", &x);
	mid = (x + 1) / 2;
	if (x % 2 == 1)
	{
		for (a = 1; a <= mid; a++)
		{
			for (b = a + 1; b <= mid; b++)
			{
				printf(" ");
			}
			for (c = 1; c <= 2 * a - 1; c++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (d = mid + 1; d <= x; d++)
		{
			for (e = mid; e < d; e++)
			{
				printf(" ");
			}
			for (f = 1; f <= 2 * (x - d) + 1; f++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("请输入奇数！！");
	}
}

//第十三题
void GraphNo13()
{
	int n = 0, x = 0, y = 0, z = 0, i = 0;
	printf("请输入显示的位数：");
	scanf("%d", &n);
	i = n;
	for (x = 1; x <= n; x++)
	{
		i--;
		for (y = 1; y <= i; y++)
		{
			printf(" ");
		}
		for (z = 1; z <= 2 * x - 1; z++)
		{
			if (z == 1 || z == 2 * x - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int GraphInit()
{
	int rumber = 0;
	printf("请输入想要查看的作业（1~13）：");
	while (1)
	{
		scanf("%d", &rumber);
		if (rumber < 1 || rumber > 13)
		{
			printf("请输入正确值\n");
			continue;
		}
		break;

	}
	return rumber;
}

//图形选择
void GraphChoice(rumber)
{
	switch (rumber)
	{
		case 1:
		{
			GraphNo1();
			break;
		}
		case 2:
		{
			GraphNo2();
			break;
		}
		case 3:
		{
			GraphNo3();
			break;
		}
		case 4:
		{
			GraphNo4();
			break;
		}
		case 5:
		{
			GraphNo5();
			break;
		}
		case 6:
		{
			GraphNo6();
			break;
		}
		case 7:
		{
			GraphNo7();
			break;
		}
		case 8:
		{
			GraphNo8();
			break;
		}
		case 9:
		{
			GraphNo9();
			break;
		}
		case 10:
		{
			GraphNo10();
			break;
		}
		case 11:
		{
			GraphNo11();
			break;
		}
		case 12:
		{
			GraphNo12();
			break;
		}
		case 13:
		{
			GraphNo3();
			break;
		}
	}

}
