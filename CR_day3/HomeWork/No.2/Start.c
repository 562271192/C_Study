#include <stdio.h>
#include <string.h>
/*
	* Project content����������״Ϊֱ�������εľžų˷���
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	//���ó�ʼֵ
	int i = 0, x = 0;
	for (i = 1; i <= 9; i++)
	{
		for (x = 1; x <= i; x++)
		{
			printf("%-2d ",i*x);
		}

		printf("\n");
	}
	

	system("pause");

	return 0;
}
