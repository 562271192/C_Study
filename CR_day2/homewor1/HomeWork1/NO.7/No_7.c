#include <stdio.h>
/*
	* Project content����дһ���������5����10���Ľ���� �� 
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