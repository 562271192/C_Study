#include <stdio.h>
/*
	* 参考例L2_6.C编写一个程序，从键盘输入字符（例如’1’），转换成十进制数（即1），并输出。提示：“1”的ASCII码为十进制数49，将其减去一个数等于十进制1即可。
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	char a = 0;
	int  b = 0;
	printf(" Number:");
	scanf("%c", &a );
	b = (int)a - 48;
	printf(" DEC:%d\n", b);
	system("pause");
	return 0;
}
