#include <stdio.h>
/*
	* Project content��д����36��intתΪchar,��double���鿴���ڴ�ֵ
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
