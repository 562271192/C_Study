#include <stdio.h>
/*
	* Project content：编写一个程序输出5！、10！的结果。 。 
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	int  a = 0 , temp = 1 , i = 0;
	printf("Number:");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		temp = temp * i;
	}
	printf("Consult:%d\n",temp);
	system("pause");
	return 0;
}
