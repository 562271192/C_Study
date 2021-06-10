#include <stdio.h>
#include <string.h>
#include <locale.h>
//#include <tchar.h>

void flush() {
	while (getc(stdin) != '\n');
}
int main(int argc, char* argv[])
{
	
	//setlocale(LC_ALL,"chinese");
	// scanf_s[str1,大小];
	//char str1[20] ;
	//char str2[20] ;
	//wchar_t  str3[20] = L"abc你好";   //Uniocooe字符集/宽字节
	//wchar_t  str4[20] = L"edb";
	//scanf_s("%19s", &str1, sizeof(str1));
//1、编程实现库函数strcpy strncpy wcscpy  wcsncpy的使用例子

//strcpy（拷贝字符串）
	/*
	strcpy(str2, str1);
	trcpy_s(str2, sizeof(str2), str1);       
	*/

//strncpy(指定拷贝字符串几个字节)
	/*
	strncpy(str2, str1, sizeof(str2));
	str2[sizeof(str2) - 1] = '\0';

	*/



//2、编程实现库函数strcat strncat wcscat  wcsncat的使用例子

//strcat(拼接)
	/*
	strcat(str2, str1 );
	*/
//strncat（拼接几个字节）
	/*
	strncat(str2, str1, 1);	
	*/


//3、编程实现库函数strlen wcslen的使用例子
//strlen(求字符串长度)
	/*
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	printf("string1:%d\n", len1);
	printf("string2:%d\n", len2);
	*/


// 4、编程实现库函数strcmp wcscmp的使用例子
//strcmp(求字符串是否相同)
	/*
	int result = strcmp(str1, str2);
	printf("result:%d\n", result);
	*/

//5、编程实现库函数strlwr wcslwr的使用例子
//strlwr(全部变为小写)
	/*
	_strlwr(str2);
	printf("string2:%s\n", str2);
	*/

//6、编程实现库函数strupr wcsupr的使用例子
//strupr （全部变为大写）
	/*
	_strupr(str2);
	*/


//7、编程实现库函数strstr wcsstr的使用例子
//strstr(寻找字符串中的子串:返回地址)
	/*
	int token = strstr(str2, "ell");
	printf("sub str str:%s\n", token - str2);
	*/


	//printf("string1:%s\n", str1);
	//printf("string2:%s\n", str2);
	//wprintf(L"string3:%s\n", str3);
	//wprintf(L"string4:%s\n", str4);
	//_tprintf(L"string3:%s\n", str3);
	//_tprintf(L"string4:%s\n", str4);

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
//第九题：输入一个字符串，统计每个字符出现的次数
/*
	char str1[5][5];
	char tmp[5];
	int sum = 0;
	printf("string:");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%5s", &str1[i], sizeof(str1[i]));
		str1[i][sizeof(str1[i]) - 1] = '\0';
	}
	printf("请输入查找的字符:");
	scanf_s("%5s", &tmp, sizeof(tmp));
	tmp[sizeof(tmp) - 1] = '\0';
	for (int y = 0; y < 5; y++)
	{
		if (strcmp(tmp, str1[y]) == 0)
		{
			sum++;
		}
	}
	printf("%s:%d", tmp, sum);
*/
//第十题：输入一个字符串，删除指定的字母
/*

char str1[5][5];
char tmp[5];
int sum = 0;
printf("string:");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%5s", &str1[i], sizeof(str1[i]));
		str1[i][sizeof(str1[i]) - 1] = '\0';
	}
	printf("delstr:");
	scanf_s("%5s", &tmp, sizeof(tmp));
	tmp[sizeof(tmp) - 1] = '\0';
	for (int y = 0; y < 5; y++)
	{
		if (strcmp(tmp, str1[y]) == 0)
		{
			str1[y][0] = '\0';
		}
	}
	for (int z = 0; z < 5; z++)
	{

		printf("%s", str1[z]);
		
	}
*/
//十一.输入一个字符串，显示所有的小写字母
/*
	char str1[5][5];
	char tmp1[5] = { 'a' };
	char tmp2[5] = { 'z' };
	printf("string:");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%5s", &str1[i], sizeof(str1[i]));
		str1[i][sizeof(str1[i]) - 1] = '\0';
	}
	for (int y = 0; y < 5; y++)
	{
		if (strcmp(tmp1, str1[y]) <= 0 && strcmp(tmp2, str1[y]) >= 0)
		{
			printf("%s", str1[y]);
		}
	}
*/

//十二题 输入一个字符串，显示所有的大写字母
/*
	char str1[5][5];
	char tmp1[5] = { 'A' };
	char tmp2[5] = { 'Z' };
	printf("string:");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%5s", &str1[i], sizeof(str1[i]));
		str1[i][sizeof(str1[i]) - 1] = '\0';
	}
	for (int y = 0; y < 5; y++)
	{
		if (strcmp(tmp1, str1[y]) <= 0 && strcmp(tmp2, str1[y]) >= 0)
		{
			printf("%s", str1[y]);
		}
	}
*/

//十三题 输入一个字符串，删除出现重复的字母
/*
	char str1[5][5];
	char tmp[5];
	printf("string:");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%s", &str1[i], sizeof(str1[i]));
		str1[i][sizeof(str1[i]) - 1] = '\0';
	}

	for (int x = 0; x < 5; x++)
	{
		strncpy(tmp, str1[x], 2);
		for (int y = x+1; y < 5-x; y++)
		{
			if (strcmp(str1[x+y],tmp) == 0)
			{
				str1[x][0] = '\0';
				str1[x + y][0] = '\0';
				
			}
		}
	}
	for (int z = 0; z < 5; z++)
	{
		printf("%s", str1[z]);
	}
*/

//十四题 输入一个字符串，清除在字符串第一个字母前面的空格和最后一个字母后面的空格




	return 0;








//扩展
//strchr （搜索字符:返回数组的地址）
	/*
		char* pos = strchr(str1, 'a');
		printf("pos :%d\n", pos - str1);
	*/
//strtok (分割)
	/*
		char input[] = "dsfaf sdgfsdg sdgs";
		char* token = strtok(input, " ");
		while (token)
		{
			puts(token);                  //直接显示一个字符串
			token = strtok(NULL, " ");
		}
	*/
//strtol转换任何进制成十进制
	/*
	char str3[] = "F";
	int num = strtol(str3, NULL, 16);
	printf("%d\n", num);
	*/



}	