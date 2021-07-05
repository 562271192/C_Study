#include <stdio.h>
#include <math.h>
/*
	* Project content：1W5的阶乘
	* Creating time: 2021-07-02
	* Founder: Jingjie
*/

int main(int argc, char* argv[])
{
	//求阶乘的位数
	/*
	int n = 15000;
	double dbBitCount = 0.0;
	for (int i = 1; i <= n; i++)
	{
		dbBitCount = dbBitCount + log10(i);
	}
	printf("%d\r\n", (int)ceil(dbBitCount));
	*/
	//求1W5阶乘
	int cSun[56130] = { 1 };
	int iNum = 0, i = 1, itemp = 0, iPromoted = 0;
	iNum = sizeof(cSun) / sizeof(cSun[0]);
	while (1)
	{
		if (i > 15000)
		{
			break;
		}
		for (int x = 0; x < iNum; x++)
		{
			itemp = cSun[x] * i + iPromoted;
			iPromoted = 0;
			if (itemp >= 10)
			{
				iPromoted = itemp / 10;
				cSun[x] = itemp % 10;
			}
			else
			{
				cSun[x] = itemp;
			}
		}
		i++;
	}
	for (int y = iNum - 1; y >= 0; y--)
	{
		printf("%d", cSun[y]);
	}
	printf("\n");
	return 0;
}