#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(int argc, char* argv[])
{
//第一题
/*	
	int n = 0,x = 0,y = 0;
	printf("请输入显示的位数：");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=5;y++)
		{
			printf("*");
		}
		printf("\n");
	}
*/

//第二题
/*	
	int n = 0,x = 0,y = 0,i = 0;
	printf("请输入显示的位数：");
	scanf("%d",&n);
	for(n;n>0;n--)
	{
		i = n-1;
		for(y=1;y<=5;y++)
		{
			for(i;i>0;i--)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
*/

//第三题
/*
	int n = 0,x = 0,y = 0,z = 0,i = 0;
	printf("请输入显示的位数：");
	scanf("%d",&n);
	i = n;
	for(x=1;x<=n;x++)
	{
		i--;
		for(y=1;y<=i;y++)
		{
			printf(" ");
		}
		for(z=1;z<=2*x-1;z++)
		{
	
			printf("*");
		}
		printf("\n");
	}

*/



//第四题

/*	int n = 0,x = 0,y = 0,z = 0,i = 0;
	printf("请输入显示的位数：");
	scanf("%d",&n);
	i = n;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=x-1;y++)
		{
			printf(" ");
		}
		for(z=1;z<=2*i-1;z++)
		{
			printf("*");
		}
		i = i-1;
		printf("\n");
	}
  
*/

//第五题
/*
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

*/

//第六题
/*
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
			if(x==1 || x==n || z==1 || z==a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		a = a+2;
		printf("\n");
	}
*/

//第七题
/*
	int n = 5,x = 0,y = 0,z = 0,a = 6,i = 0;
	i = n;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=i;y++)
		{
			printf(" ");
		}
		for(z=1;z<=a;z++)
		{
			if(x==1 || z==1 || z==a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		a = a+2;
		printf("\n");
	}
	i = n-1;
	for (x=1;x<=n-1;x++)
	{

		for(y=0;y<=x;y++)
		{
			printf(" ");
		}
		for (z=1;z<=4+2*i;z++)
		{
			if(z==1 || z==4+2*i || x==n-1){
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		i--;
		printf ("\n");
	}
*/

//第八题
/*
	int n = 5,x = 0,y = 0,z = 0,a = 6,i = 0;
	i = n;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf(" ");
		}
		for (z=1;z<=2*i-1;z++)
		{
			if(z ==1 || z == 2*i-1 || x==n)
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
	for (x=1;x<=n-1;x++)
	{
		for(y=1;y<i;y++)
		{
			printf(" ");
		}
		for(z=1;z<=2*x+1;z++)
		{
			if( z==1 || z==2*x+1 )
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
*/

//第九题
/*
	int n = 0,x = 0,y = 0,z = 0,a = 0;
	printf("请输入n的参数:");
	scanf("%d",&n);
	a= n-1;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=n-1;y++)
		{
			if(x==1 || x==n || y==a)
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
*/

//第十题
/*
	int n = 0,x = 0,y = 0,z = 0,a = 0;
	printf("请输入n的参数:");
	scanf("%d",&n);
	a = n/2;
	z = n;
	for(a;a>=1;a--)
	{
		for(x=1;x<=z;x++)
		{
			if(x==1 || x==z)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		z=z-2;
		printf("\n");
	}
	a = n-n/2;
	for (x=1;x<=a;x++)
	{
		for(y=1;y<=2*x-1;y++)
		{
			if(y==1 || y==2*x-1)
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
*/

//第十一题
/*
	int n=0,x=0,y=0,z=0;
	printf("请输入一个数字：");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		for (y=1;y<=n;y++)
		{
			if(y==1 || y==n || x==y)
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
*/

//第十二题
/*
	int a,b,c,d,e,f,x,mid;
	printf("请输入奇数值：");
	scanf("%d",&x);
	mid = (x+1)/2;
	if (x % 2 == 1)
	{
		for (a = 1; a <= mid; a++)
		{
			for (b = a+1; b <= mid ; b++)
			{
				printf(" ");
			}
			for (c = 1; c <= 2*a-1;c++)
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
			for (f = 1; f <=2*(x-d)+1 ; f++)
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
*/

//第十三题
/*
	int n = 0,x = 0,y = 0,z = 0,i = 0;
	printf("请输入显示的位数：");
	scanf("%d",&n);
	i = n;
	for(x=1;x<=n;x++)
	{
		i--;
		for(y=1;y<=i;y++)
		{
			printf(" ");
		}
		for(z=1;z<=2*x-1;z++)
		{
			if(z==1 || z==2*x-1)
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
*/

//第十四题
/*
	int year = 0;
	printf("请输入一个年份：");
	scanf("%d",&year);
	if((year%4 == 0&&year%100 !=0) || (year%400==0))
	{
		printf("%d此年是闰年\n",year);
	}
	else
	{
		printf("%d此年不是闰年\n",year);
	}
*/

//第十五题

//第十六题
/*
	int a=0,b=0,c=0,d=0;
	printf("请输入3个数：");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		d = a;
		a = b;
		b = d;
	}
	if(a>c)
	{
		d = a;
		a = c;
		c = d;
	}
	if(b>c)
	{
		d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d\n",a,b,c);
*/
//十七题
//十八题
/*
	int x=0,y=0,z=0;
	for	(x=1;x<=9;x++)
	{
		for	(y=1;y<=x;y++)
		{
			z = x*y;
			printf("%d*%d=%-2d ",y,x,z);
		}
		printf("\n");
	}
*/

//十九题
/*
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=0;j<=8;j++)
		{
			if(i%2==1)
			{
				if(j%2==0)
				{
					printf("%c%c",0xa8,0x80);//输出白色//
				}
				else
				{
					printf("   ");
				}
			}
			else
			{
				if(j%2==1)
				{
					printf("%c%c ",0xa8,0x80);
				}
				else
				{
					printf("  ");
				}
			}
			
		}
		printf("\n");
    }

*/

	return 0;
}