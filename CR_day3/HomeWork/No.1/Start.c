#include <stdio.h>
#include <string.h>
/*
	* Project content���Ӽ�������10���������������������С�������
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	//���ó�ʼֵ
	int nNumber[10] = {0};
	int i = 0,nMax = -2147483648 , nMin = 0;
	//�ж����ֵ
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &nNumber[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (nNumber[i] > nMax)
		{
			nMax = nNumber[i];
		}
	}
	//�ж���Сֵ
	nMin = nNumber[0];
	for (i = 1; i < 10; i++)
	{
		if (nNumber[i] < nMin)
		{
			nMin = nNumber[i];
		}
	}
	printf("Max:%d\nMin:%d\n", nMax,nMin);

	system("pause");

	return 0;
}