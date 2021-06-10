#include <MyFun.h>

int main(int argc, char* argv[])
{
//第一题
/*
	No1Int();
*/

//第二题
/*
	No2Int();
*/

//第三题
/*
	No3Int();
*/

//第四题
/*
	No4Int();
*/

//第五题
/*
	No5Int(); 
*/

//第六题
/*
	No6Int();
*/

//第七题
/*
	No7Int();
*/

//第八题
/*
	No8Int();
*/
//第九题
	int Arr1[2][3] = { {1,2,3} ,{3,4,5} };
	int Arr2[3][2] = { {1,2} ,{3,4} ,{8,9} };
	int Arr3[2][2] = { 0 };
	int x1 = sizeof(Arr1) / sizeof(Arr1[0]);
	int y1 = sizeof(Arr1[0]) / sizeof(Arr1[0][0]);
	int rumbery = 0;
	//InputArr9(Arr2, x2, y2);

	for (int c = 0; c  < x1; c++)
	{
		//printf("\n % d %d ", Arr1[c][0], Arr2[0][c]);
		int sun = 0;
		int sun2 = 0;
		for (int d = 0; d < y1; d++)
		{
			sun  += Arr1[c][d]*Arr2[d][c];
			sun2 += Arr1[c][d] * Arr2[d][c+1];

		}
		printf("sun :%d ", sun);
		printf(" %d \n", sun2);


		/*Arr3[rumberx][rumbery] = sun;
		rumbery++;*/
	}


	return 0;
}