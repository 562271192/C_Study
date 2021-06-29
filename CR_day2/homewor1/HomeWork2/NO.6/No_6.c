#include <stdio.h>
/*
	* Project content：写程序说明一下int和long在内存中的区别，（即数据大小）
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	int x = 0;
	long y = 0;
	printf("%p\n", &x);
	getchar();
	x = -1;
	getchar();
	printf("%p", &y);
	getchar();
	return 0;
}
