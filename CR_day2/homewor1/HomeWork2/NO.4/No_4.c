#include <stdio.h>
/*
	* Project content：写程序将36由int转为char,和double并查看其内存值
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	int i = 38;
	printf("%p", &i);
	getchar();
	(char)i;
	printf("%p", &i);
	getchar();
	(double)i;
	printf("%p", &i);
	getchar();
	system("pause");
	return 0;
}
