#include <stdio.h>
/*
	* Project content��д����˵��һ��int��long���ڴ��е����𣬣������ݴ�С��
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
