#include <stdio.h>
/*
	* Project content：使用递归输出 cbabc
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/
//回文函数
void Plalindrome(char n)
{
	if (n == 97)
	{
		printf("%c", n);
		return 97;
	}
	//输出当前值
	printf("%c", n);
	Plalindrome(n - 1);
	//递归结束后继续输出当前值
	printf("%c", n);
}
int main(int argc, char* argv[])
{
	char a = 'z';
	Plalindrome(a);
	return 0;
}