#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <tchar.h>
#include <macro.c>
int main(int argc, char* argv[])
{
	
//第八题：输入5个字符串，实现字符串的升序排列
/*
	char str1[5][5];
	char tmp[5];
	for (int  i = 0; i < 5; i++)
	{
		scanf_s("%s", &str1[i], sizeof(str1[i]));
		str1[i][sizeof(str1[i]) - 1] = '\0';
	}

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (strcmp(str1[y + 1] , str1[y]  ) < 1)
			{
				strncpy(tmp, str1[y+1], 1);
				strncpy(str1[y+1], str1[y], 1);
				strncpy(str1[y], tmp, 1);
			}
		}
	}
	for (int z = 0; z < 5; z++)
	{
		printf("%s ",str1[z]);
	}
*/
//九、输入一个字符串，统计每个字符出现的次数
/*
	char str1[10];
	int  str2[10] = { 0 };
	int  sum[10] = { 0 };
	scanf_s("%s", &str1, sizeof(str1));
	str1[sizeof(str1) - 1] = '\0';

	for (int x = 0; x < 9; x++)
	{
		int y = 0;
		for ( y = 0; y < 9; y++)
		{
			if (str1[x] == str2[y])
			{
				sum[y]++;
				break;
			}
		}
		if (y == 9)
		{
			str2[x] = str1[x];
			sum[x]++;
		}

	}
	for (int i = 0; i < 9; i++)
	{
		if (str2[i] != 0) 
		{
			printf("%c[%d]\n", str2[i], sum[i]);
		}
	}
*/

//第十题 输入一个字符串，删除指定的字母
/*
	char str1[10] ; //
	scanf_s("%s", &str1, sizeof(str1));
	str1[sizeof(str1) - 1] = '\0';
	for (int i = 0; i < sizeof(str1); i++)
	{
		if (str1[i] == '6')
		{
			for (int j = i; j < sizeof(str1)-1; j++) 
			{
				str1[j] = str1[j + 1];
			}
			i--;
		}
	}
	puts(str1);
*/

//十一题 输入一个字符串，显示所有的小写字母
/*
	char str1[10];
	char tmp1[2] = { 0 };
	scanf_s("%s", &str1, sizeof(str1));
	str1[sizeof(str1) - 1] = '\0';
	for (int i = 0; i < sizeof(str1)-1; i++) 
	{
		tmp1[0] = str1[i];
		if (strcmp("a", tmp1) <= 0 && strcmp("z", tmp1) >= 0)
		{
			printf("%s", tmp1);
		}
	}
*/
//十二题 输入一个字符串，显示所有的大写字母
/*
	char str1[10];
	char tmp1[2] = { 0 };
	scanf_s("%s", &str1, sizeof(str1));
	str1[sizeof(str1) - 1] = '\0';
	for (int i = 0; i < sizeof(str1) - 1; i++)
	{
		tmp1[0] = str1[i];
		if (strcmp("A", tmp1) <= 0 && strcmp("Z", tmp1) >= 0)
		{
			printf("%s", tmp1);
		}
	}
*/
//十三题 输入一个字符串，删除出现重复的字母
/*
	char str1[10] = { "pjabcdbhc" };
	char str2[10] = { "0" };
	//scanf_s("%s", &str1, sizeof(str1));
	//str1[sizeof(str1) - 1] = '\0';
	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < sizeof(str2); y++)
		{
			printf("%c %c \n", str1[x], str2[y]);
			if (str1[x] == str2[y])
			{
				for (int j = y; j < sizeof(str2)- y ; j++)
				{
					str2[j] = str2[j + 1];
				}
				y--;
				break;
			}
			if (y == sizeof(str2) -1)
			{
				str2[x] = str1[x];
			}
		}


	}
	printf("%s\n", str2);
*/

//十四题 输入一个字符串，清除在字符串第一个字母前面的空格和最后一个字母后面的空格
/*
	char str[20] = "0";		// 定义一个字符数组，大小为20个字节
	gets(str);          // 将用户输入的字符串（可以包含空格）存储到字符数组str中，以回车结束输入
	for (int  i = 0; i < sizeof(str); i++)
	{
		if (i == sizeof(str) - 1)
		{
			str[i] = "\0";
		}
		else
		{
			str[i] = str[i + 1];
		}
	}
	printf("% s" , str);
*/

//十五题  输入一个字符串，统计单词的个数
//十六题  输入1个字符串，找出字符最长的单词


//十七题 任意输入一字符串，然后将其反序输出
/*
	char str1[5];
	scanf_s("%s", &str1, sizeof(str1));
	str1[sizeof(str1) - 1] = '\0';
	for (int i = sizeof(str1) - 1; i >=0 ; i--)
	{
		if (str1[i] != 0 ) 
		{
			printf("%c", str1[i]);
		}
	}
*/

//十八题 输入6个字符串，求最大串和最小串
/*
	char str1[6][4] = { {"abc"},{"bcd"},{"efg"},{"hig"},{"klm"},{"nup"} };
	char tmp1[4] = "0";
	for (int i = 0; i < 6; i++)
	{
		for (int  i = 0; i < 5; i++)
		{
			if (strcmp(str1[i], str1[i+1]) <= 0)
			{
				strcpy(tmp1, str1[i]);
				strcpy(str1[i], str1[i+1]);
				strcpy(str1[i+1], tmp1);
			}
		}
	}
	printf("Min:%s\nMax:%s", str1[5],str1[0]);
*/
//十九题 写一函数，实现删除字符串str1中含有的字符串str2      (不会)
/*
	char str1[6] = "abcdb";
	char str2[5] = "cd";
	//char* token = strstr(str1, str2);
	//int a = token - str1;
	//for (int i = a; i < 6 -a; i++)
	//{
	//	for (int z = 0; z < 2 ; i++)
	//	{
	//		if (str1[a] == str2[z])
	//		{
	//			
	//		}
	//	}
	//}q
	//char* token = strtok(str1, str2);
	//while (token)
	//{
	//	puts(token);                  //直接显示一个字符串
	//	token = strtok(NULL, "");

	//}
*/






//第九天

//2. 定义一个宏，声明一个常数，用以表明1年中有多少秒
/*
	int Second = OneYear_Second;
	printf("一年的秒数为：%d", Second);
*/

//3. 定义一个宏，实现求两数相加
/*
	printf("sum:%d", ADD(2,3)*5);
*/
//4.定义一个宏，实现求两数相减
/*
	printf("subtraction:%d", SUB(3, 2) * 5);
*/
//5.定义一个宏，实现求两数相乘
/*
	printf("multiplication:%d", MUL(3, 2) * 5);
*/
//6.定义一个宏，实现返回两数较小的一个
/*
	int min;
	min = MIN(4, 3);
	printf("min=%d\n", min);
*/
//7 定义一个宏，实现返回两数较大的一个
/*
	int max;
	max = MAX(4, 3);
	printf("max=%d\n", max);
*/

//8 定义一个宏，实现求一个数的平方
/*
	printf("square:%d", SQUARE(3));
*/

//9. 定义一个宏，实现判断润年
/*
	int Year = 0;
	scanf_s("%d", &Year);
	if (LEAP_YEAR(Year) == 1)
	{
		printf("This is a leap year!");
	}
	else
	{
		printf("This is not a leap year");
	}
*/


//10. 定义一个宏，实现求一个月有几天

//11. 定义一个宏，实现判断偶数
/*
	int Even = 0;
	scanf_s("%d", &Even);
	if (EVEN_NUMBER(Even) == 1)
	{
		printf("This is a  even number!");
	}
	else
	{
		printf("This is not a even number");
	}
*/

//12. 定义一个宏，实现判断奇数
/*
	int Odd = 0;
	scanf_s("%d", &Odd);
	if (ODD_NUMBER(Odd) == 1)
	{
		printf("This is a  odd number!");
	}
	else
	{
		printf("This is not a odd number");
	}
*/

//13.定义一个宏，实现判断素数
/*
	int a = 101;
	PRIME_NUMBER(a);
	return 0;
*/


}