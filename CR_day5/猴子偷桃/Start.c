#include <stdio.h>
/*
	* Project content：猴子吃桃
	* Creating time: 2021-07-02
	* Founder: Jingjie
	* 猴子第一天吃了若干个桃子，当即吃了一半，还不解馋，又多吃了一个； 
	第二天，吃剩下的桃子的一半，还不过瘾，又多吃了一个；
	以后每天都吃前一天剩下的一半多一个，
	到第10天想再吃时，只剩下一个桃子了。问第一天共吃了多少个桃子？
*/

int Sun(int Day)；//猴子吃桃子的数量计算（函数实现  3 X 2^n-1 -2）
int main(int argc, char* argv[])
{
	//猴子的桃数量倒叙:
	//1、4、10、22、46、94、190、382、766、1534
	//  3  6   12  24  48  96   192  384  768
	//	3 X 2^n-1 -2
	int nDay = 0;
	//查询猴子最后一天为1时，总共桃子的个数。
	printf("Days:");
	scanf_s("%2d", &nDay);
	printf("Peach_Sun:%d\r\n", Sun(nDay));
	return 0;
}
int Sun(int Day)
{
	int temp = 0;
	Day = Day - 2;
	temp = 2 << Day;
	return temp * 3 - 2;
}