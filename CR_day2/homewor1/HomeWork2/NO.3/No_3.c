#include <stdio.h>
/*
	* Project content����asscii������������۲��Ӧ��ϵ
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	char a = 0;
	int i = 0;
	//scanf("%d", &a);
	for (i = 0; i < 128 ; i ++)
	{
		a = i;
		printf("%c  ", a);
		if(i % 15 == 0)
		{
			printf("\n");
		}
	}

	//a = 127;
	//printf("%c  ", a);
	system("pause");
	return 0;
}
