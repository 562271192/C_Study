#include <stdio.h>
#include <string.h>
/*
	* Project content���������������Σ�
      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
	* Creating time: 2021-06-30
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	//���ó�ʼֵ
	int i = 0, x = 0 , y = 0;
	for (i = 0; i < 4; i++)
	{
		for(x = 0; x < 7; x++)
		{
			if ( i == 3)
			{
				continue;
			}
			if ( x == 3 + y || x == 3 - y)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		y++;
		if ( i != 3)
		{
			printf("\n");
		}
	}
	y = y -1;
	for (i = 0; i < 4; i++)
	{
		for(x = 0; x < 7; x++)
		{
			if ( x == 3 + y || x == 3 - y)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		y--;
		printf("\n");
	}
	system("pause");

	return 0;
}
