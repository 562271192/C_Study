#include <stdio.h>
/*
	* Project content：自己写程序查看float定义数据的内存。
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	float a = 58.25;
	printf("%p", &a);
	getchar();
	return 0;
}
