#include <stdio.h>
/*
	* Project content：使用goto模拟三种循环
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/

int main(int argc, char* argv[])
{
	int i = 0, n = 10, iDSun = 0, iFSun = 0, iWSun = 0;

/*<-----------------goto 模拟do 循环----------------------------->
* do 循环
	do
	{
		iSun = iSun + i;
		i++;
	} while (i <= n);
	printf("Sun:%d\n", iSun);

*/
//模拟开始：
	DO_Sun:
		iDSun = iDSun + i;
		i++;
		if (i <= n)
		{
			goto DO_Sun;
		}
		printf("DSun:%d\n", iDSun);

/*  <-----------------goto 模拟for 循环----------------------------->
* for 循环
	for (int i = 0; i < n; i++)
	{
		iFSun = iFSun + i;
	}
	printf("FSun:%d\n", iFSun);
*/
//模拟开始：
		i = 0;
		goto For_Run;
	For_Add:
		i++;
	For_Run:
		if (i > n)
		{
			goto For_END;
		}
		iFSun = iFSun + i;
		goto For_Add;
	For_END:
		printf("FSun:%d\n", iFSun);

/*  <-----------------goto 模拟while 循环----------------------------->
*  while 循环
	i = 0;
	while (1)
	{
		if (i > 10)
		{
			break;
		}
		iWSun = iWSun + i;
		i++;
	}
	printf("WSun:%d\n", iWSun);
*/
//模拟开始：
		i = 0;
	WH_Sun:
		if (i > n)
		{
			goto Quit_WH;
		}
		iWSun = iWSun + i;
		i++;
		goto WH_Sun;
	Quit_WH:
		printf("DSun:%d\n", iWSun);
		return 0;
}