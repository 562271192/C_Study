#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//第十四题
void ExercisesId14()
{
	int year = 0;
	printf("请输入一个年份：");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d此年是闰年\n", year);
	}
	else
	{
		printf("%d此年不是闰年\n", year);
	}
}

//第十五题

void ExercisesId15()
{
	int year = 0, month = 0, day = 0, sun = 0;
	printf("请输入一个年份\\月\\日：");
	scanf("%d%d%d", &year, &month, &day);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2) {
			day++;
		}

	}
	switch (month)
	{
	case 1:
	{
		sun = day;
		printf("这一天是这一年的第%d天", day);
		break;
	}
	case 2:
	{
		sun = 31 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 3:
	{
		sun = 59 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 4:
	{
		sun = 90 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 5:
	{
		sun = 120 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 6:
	{
		sun = 151 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 7:
	{
		sun = 181 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 8:
	{
		sun = 212 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 9:
	{
		sun = 243 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 10:
	{
		sun = 273 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 11:
	{
		sun = 304 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	case 12:
	{
		sun = 334 + day;
		printf("这一天是这一年的第%d天", sun);
		break;
	}
	}
}

//第十六题
void ExercisesId16() 
{
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
}
//十七题
void ExercisesId17()
{
	int x = 0, y = 0, z = 0;
	for (x = 4; x >= 0; x--)
	{
		for (y = x * x; y >= 0; y--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (x = 0; x <= 4; x++)
	{

		for (y = x * x; y >= 0; y--)
		{
			printf(" ");
		}
		printf("*\n");
	}
}

//十八题
void ExercisesId18()
{
	int x = 0, y = 0, z = 0;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= x; y++)
		{
			z = x * y;
			printf("%d*%d=%-2d ", y, x, z);
		}
		printf("\n");
	}
}

//十九题
void ExercisesId19()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (i % 2 == 1)
			{
				if (j % 2 == 0)
				{
					printf("%c%c", 0xa8, 0x80);//输出白色//
				}
				else
				{
					printf("   ");
				}
			}
			else
			{
				if (j % 2 == 1)
				{
					printf("%c%c ", 0xa8, 0x80);
				}
				else
				{
					printf("  ");
				}
			}

		}
		printf("\n");
	}
}
//二十题
void ExercisesId20()
{
	int x = 0, y = 0;
	for (x = 101; x <= 200; x++)
	{
		for (y = 2; y <= x / 2; y++)
		{
			if (x % y == 0)
			{
				break;
			}
			else
			{
				if (x / 2 == y)
				{
					printf("%d ", x);
				}
			}
		}
	}
}

//二十一题
void ExercisesId21()
{
	int x = 0;
	while (1)
	{
		printf("请输入成绩：\n");
		scanf_s("%d", &x);
		if (x > 100 || x < 0)
		{
			printf("请输入正确的成绩!\n");
			continue;
		}
		break;
	}

	if (x >= 90)
	{
		printf("A");
	}
	else if (x >= 60)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
}

//二十二题
void ExercisesId22()
{
	int x = 0, y = 0, z = 0, h = 0;
	printf("请输入两个数：");
	scanf_s("%d%d", &x, &y);
	if (x < y)
	{
		z = x;
		x = y;
		y = z;
	}

	for (h = y; h > 0; h--)
	{
		if (y % h == 0 && x % h == 0)
		{
			printf("%d和%d的最大公约数为：%d\n", x, y, h);
			printf("%d和%d的最小公倍数为：%d", x, y, x * y / h);
			break;
		}
	}
}

//二十三题
void ExercisesId23()
{
	int x = 100, y = 0, z = 0;
	while (1)
	{
		if (z > 10 || x == 0)
		{
			printf("共跳了%d次,第%d反弹了%d", z, z, x);
			break;
		}
		y = x + x / 2 + y;
		x = x / 2;
		z++;
	}
	printf("经过了：%d", y);
}
//二十四题
void ExercisesId24()
{
	int x = 0, y = 0, z = 0;
	while (1)
	{
		if (x > 20)
		{
			printf("1~20的和为：%d", y);
			break;
		}
		y = x + y;
		x++;
	}

}

//二十五题
void ExercisesId25()
{
	int x = 0, y = 0, z = 0;
	printf("请输入一个不多于5位的数：");
	while (1)
	{
		scanf_s("%d", &x);
		if (x < 0 || x / 100000 != 0)
		{
			printf("输入错误重新输入！\n");
			continue;
		}
		break;
	}
	while (1)
	{
		y++;
		if (x / 10 == 0)
		{
			printf("%d\n", x % 10);
			printf("这是一个%d位数\n", y);
			break;
		}
		printf("%d\n", x % 10);
		x = x / 10;
	}
}

//第二十六题
void ExercisesId26()
{
	int x = 0, y = 0;
	printf("请输入一个5位的数：");
	while (1)
	{
		scanf_s("%d", &x);
		if (x < 0 || x / 100000 != 0)
		{
			printf("输入错误重新输入！\n");
			continue;
		}
		break;
	}
	if (x / 10000 == x % 10)
	{
		x = x % 10000;
		y = x / 10;
		if (x / 1000 == y % 10)
		{
			printf("这是一个回文函数");
		}
		else
		{
			printf("这不是一个回文函数");
		}
	}
	else
	{
		printf("这不是一个回文函数");

	}
}
//二十七题
void ExercisesId27()
{
	int x = 0, y = 0;
	for (x = 0; x <= 100; x++)
	{
		for (y = 2; y <= x / 2; y++)
		{
			if (x % y == 0)
			{
				break;
			}
			else
			{
				if (x / 2 == y)
				{
					printf("%d ", x);
				}
			}
		}
	}
}

//二十八题 
void ExercisesId28()
{
	int x = 0, y = 0;
	printf("请输入一个小写字母：");
	while (1)
	{
		scanf("%c", &x);
		if (x > 122 || x < 97)
		{
			printf("输入错误，重新输入！\n");
			continue;
		}
		break;
	}
	x = x - 32;
	printf("%c", x);

}
//
void ExercisesId29() 
{

	printf("无二十九题");
}


//三十题 
void ExercisesId30()
{
	int x = 0, y = 0, a = 0, b = 0;
	char z[100];
	printf("请输入一个十进制整数：");
	scanf("%d", &x);
	while (1)
	{

		if (x / 2 == 0)
		{
			y = x % 2;
			z[a] = y;
			break;
		}
		y = x % 2;
		z[a] = y;
		x = x / 2;
		//printf("X:%d\n Y:%d\n A:%d\n", x, y, a);
		a++;
	}
	for (a; a >= 0; a--)
	{
		printf("%d", z[a]);
	}
}

//三十一

void ExercisesId31()
{
	float r = 2.5, h = 3.5, t = 3.14;
	printf("圆柱的体积为:%0.4f", (r * r * t) * h);
}
//三十二

void ExercisesId32()
{
	int x = 0, y = 1;
	for (x = 1; x < 300; x++)
	{
		if ((x % 7 == 0) || (x % 17 == 0) && (x % 2 == 0))
		{
			printf("%-3d ", x);
			if (y % 5 == 0)
			{
				printf("\n");
			}
			y++;
		}
	}
}

//三十三题

void ExercisesId33()
{
	int x = 0, y = 0, z = 1;
	for (x = 100; x <= 1000; x++)
	{
		for (y = 100; y <= 1000; y++)
		{
			if ((x + y) % 15 == 0)
			{
				printf("%-4d ", x + y);
				if (z % 10 == 0)
				{
					printf("\n");
				}
				z++;
			}
		}
	}
}

//三十四题
void ExercisesId34()
{
	int x = 0, y = 1, z = 0, h = 0, s = 0;
	printf("请输入想求的斐波那契数列：");
	scanf("%d", &h);
	printf("%d %d ", x, y);
	while (1)
	{
		if (s == h - 2)
		{
			break;
		}
		z = x + y;
		printf("%d ", z);
		x = y;
		y = z;
		s++;

	}
}

int ExercisesInit()
{
	int rumber = 0;
	printf("请输入想要查看的作业（14~34）：");
	while (1)
	{
		scanf("%d", &rumber);
		if (rumber < 14 || rumber > 34)
		{
			printf("请输入正确值\n");
			continue;
		}
		break;

	}
	return rumber;
}

void ExercisesChoice(rumber)
{
	switch (rumber)
	{
	case 14:
	{
		ExercisesId14();
		break;
	}
	case 15:
	{
		ExercisesId15();
		break;
	}
	case 16:
	{
		ExercisesId16();
		break;
	}
	case 17:
	{
		ExercisesId17();
		break;
	}
	case 18:
	{
		ExercisesId18();
		break;
	}
	case 19:
	{
		ExercisesId19();
		break;
	}
	case 20:
	{
		ExercisesId20();
		break;
	}
	case 21:
	{
		ExercisesId21();
		break;
	}
	case 22:
	{
		ExercisesId22();
		break;
	}
	case 23:
	{
		ExercisesId23();
		break;
	}
	case 24:
	{
		ExercisesId24();
		break;
	}
	case 25:
	{
		ExercisesId25();
		break;
	}
	case 26:
	{
		ExercisesId26();
		break;
	}
	case 27:
	{
		ExercisesId27();
		break;
	}
	case 28:
	{
		ExercisesId28();
		break;
	}
	case 29:
	{
		ExercisesId29();
		break;
	}
	case 30:
	{
		ExercisesId30();
		break;
	}
	case 31:
	{
		ExercisesId31();
		break;
	}
	case 32:
	{
		ExercisesId32();
		break;
	}
	case 33:
	{
		ExercisesId33();
		break;
	}
	case 34:
	{
		ExercisesId34();
		break;
	}
	}
}