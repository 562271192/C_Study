#include <stdio.h>
/*
	* Project content：编程输出字符0、9、A、Z、a、z的ACSII码的十进制、八进制和十六进制的表示形式 。
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	char a = 0;
	printf(" Number:");
	scanf("%c", &a );
	printf(" Dec: %d\n", a );
	printf(" Oct: 0%o\n", a );
	printf(" Hex: 0x%x\n", a );
	system("pause");
	return 0;
}
