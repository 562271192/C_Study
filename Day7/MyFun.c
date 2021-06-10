#include <MyFun.h>

//第一题
void InputArr1(int Arr[][4], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的4个数据：", i + 1);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}

void ShowArr(int Arr[][4], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int z = 0; z < y; z++)
		{
			printf("%d ", Arr[i][z]);
		}
		printf("\n");
	}
}

void  No1Int()
{
	int Arr[3][4] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr1(Arr, x, y);
	ShowArr(Arr, x, y);
}



//第二题
void InputArr2(int Arr[][3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的%d个数据：", i + 1,y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}


void TranArr(int Arr[][3], int x, int y)
{
	int z = 0;
	for (int i = 0; i < y; i++)
	{
		z = Arr[0][i];
		Arr[0][i] = Arr[1][i];
		Arr[1][i] = z;
	}
}

void ShowArr2(int Arr[][3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int z = 0; z < y; z++)
		{
			printf("%d ", Arr[i][z]);
		}
		printf("\n");
	}
}

void  No2Int()
{
	int Arr[2][3] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr2(Arr, x, y);
	TranArr(Arr, x, y);
	ShowArr2(Arr, x, y);
}


//第三题

void InputArr3(int Arr[][5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的%d个数据：", i + 1, y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}


void CompareArr(int Arr[][5], int x, int y)
{
	int b = -2147483647 - 1;
	for (int i = 0; i < x; i++)
	{
		for (int z = 0; z < y; z++)
		{
			if (Arr[i][z] > b)
			{ 
				b = Arr[i][z];
			}
		}
	}
	printf("最大的数为：%d", b);
}

void  No3Int()
{
	int Arr[3][5] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr3(Arr, x, y);
	CompareArr(Arr, x, y);

}



//第四题
void YHArr(int Arr[][8], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		int z = 0;
		Arr[i][0] = 1;
		for (z = 1; z < i; z++)
		{
			Arr[i][z] = Arr[i - 1][z] + Arr[i - 1][z - 1];

		}
		if (i > 0)
		{
			Arr[i][z] = 1;
		}
	}
}



void ShowArr4(int Arr[][8], int x, int y)
{
	for (int a = 0; a < x; a++)
	{
		for (int b = 0; b <= a; b++)
		{
			printf("%d ", Arr[a][b]);
		}
		printf("\n");
	}
}

void  No4Int()
{
	int Arr[8][8] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	YHArr(Arr, x, y);
	ShowArr4(Arr, x, y);
}

//第五题
void InputArr5(int Arr[][3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d名同学的%d门成绩：", i + 1,y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}

void AverArr5(int Arr[][3], int x, int y)
{
	int a = 0;
	for (int i = 0; i < x; i++)
	{
		for (int z = 0; z < y; z++)
		{
			a += Arr[i][z];
		}
		printf("请输入第%d名同学的%d门成绩平均数为：%d\n", i + 1, y,a/y);
	}
}

void  No5Int() 
{
	int Arr[5][3] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr5(Arr, x, y);
	AverArr5(Arr, x, y);
}

//第六题
void InputArr6(int Arr[][5], int x, int y) 
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的%d个值：", i + 1, y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}
void MinArr6(int Arr[][5], int x, int y)
{

	int a = Arr[0][0];
	for (int i = 0; i < x; i++)
	{
		for (int z = 0; z < y; z++)
		{
			if (a > Arr[i][z])
			{
				a = Arr[i][z];
			}
			
		}
	}
	printf("最小值为：% d\n", a);
	for (int i = 0; i < x; i++)
	{
		for (int z = 0; z < y; z++)
		{
			if (a == Arr[i][z])
			{
				printf("下标为：% d %d \n", i, z);
			}

		}
	}
}

void  No6Int()
{
	int Arr[3][5] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr6(Arr, x, y);
	MinArr6(Arr, x, y);
}

//第七题
void InputArr7(int Arr[][5], int x, int y) 
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的%d个值：", i + 1, y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}
void MinArr7(int Arr[][5], int x, int y)
{
	int a = 0;
	for (int i = 0; i < x; i++)
	{
		a = Arr[i][0];
		for (int z = 0; z < y; z++)
		{
			if (a > Arr[i][z])
			{
				a = Arr[i][z];
			}
		}
		printf("第%d行的最小值为：%d\n", i+1, a);
	}
}

void  No7Int() 
{
	int Arr[3][5] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr7(Arr, x, y);
	MinArr7(Arr, x, y);
}


//第八题
void InputArr8(int Arr[][3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的%d个值：", i + 1, y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}
void SunArr8(int Arr[][3], int x, int y)
{
	int a = 0;
	a = Arr[0][0] + Arr[x - 1][y - 1];
	printf("二维数组主对角线(从左上角到右下角)上元素之和：%d\n", a);
}

void  No8Int() 
{
	int Arr[3][3] = { 0 };
	int x = sizeof(Arr) / sizeof(Arr[0]);
	int y = sizeof(Arr[0]) / sizeof(Arr[0][0]);
	InputArr8(Arr, x, y);
	SunArr8(Arr, x, y);
}

//第九题

void InputArr9(int Arr[][2], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		printf("请输入第%d行的%d个值：", i + 1, y);
		for (int z = 0; z < y; z++)
		{
			scanf_s("%d", &Arr[i][z]);
		}
	}
}

