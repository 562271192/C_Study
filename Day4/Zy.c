#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(int argc, char* argv[])
{
//��һ��
/*	
	int n = 0,x = 0,y = 0;
	printf("��������ʾ��λ����");
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

//�ڶ���
/*	
	int n = 0,x = 0,y = 0,i = 0;
	printf("��������ʾ��λ����");
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

//������
/*
	int n = 0,x = 0,y = 0,z = 0,i = 0;
	printf("��������ʾ��λ����");
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



//������

/*	int n = 0,x = 0,y = 0,z = 0,i = 0;
	printf("��������ʾ��λ����");
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

//������
/*
	int n = 0,x = 0,y = 0,z = 0,a = 6,i = 0;
	printf("��������ʾ��λ����");
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

//������
/*
	int n = 0,x = 0,y = 0,z = 0,a = 6,i = 0;
	printf("��������ʾ��λ����");
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

//������
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

//�ڰ���
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

//�ھ���
/*
	int n = 0,x = 0,y = 0,z = 0,a = 0;
	printf("������n�Ĳ���:");
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

//��ʮ��
/*
	int n = 0,x = 0,y = 0,z = 0,a = 0;
	printf("������n�Ĳ���:");
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

//��ʮһ��
/*
	int n=0,x=0,y=0,z=0;
	printf("������һ�����֣�");
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

//��ʮ����
/*
	int a,b,c,d,e,f,x,mid;
	printf("����������ֵ��");
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
	printf("��������������");
	}
*/

//��ʮ����
/*
	int n = 0,x = 0,y = 0,z = 0,i = 0;
	printf("��������ʾ��λ����");
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

//��ʮ����
/*
	int year = 0;
	printf("������һ����ݣ�");
	scanf("%d",&year);
	if((year%4 == 0&&year%100 !=0) || (year%400==0))
	{
		printf("%d����������\n",year);
	}
	else
	{
		printf("%d���겻������\n",year);
	}
*/

//��ʮ����

//��ʮ����
/*
	int a=0,b=0,c=0,d=0;
	printf("������3������");
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
//ʮ����
//ʮ����
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

//ʮ����
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
					printf("%c%c",0xa8,0x80);//�����ɫ//
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