#include "MyFun.h"


void Startloop(int num, char Allname[][10])
{
	char  a;
	//设置监听
	a = getchar();
	system("cls");
	//进行判断输入的数字
	while (getchar() == '\0');
	switch (a)
	{
		case '1':
		{
			//输入所有人的姓名
			OutPutallname(num, Allname);
			break;
		}
		case '2':
		{
			//生成一个随机数
			int Randnum = 0, i = 1;
			while (i)
			{
				Randnum = rand() % num;
				//带入函数进行输出
				OutPutrandname(Randnum, Allname);
				scanf("%d", &i);
			}
			break;
		}
		case '3':
		{
			OutPutrandnameno(Allname);
			break;
		}
		default:
		{
			printf("Error!\n");
			break;
		}

	}

}
void OutPutallname(int Num, char Arr[][10])
{
	for (int i = 0; i < Num; i++)
	{
		printf("%s\n", Arr[i]);
	}
}

void OutPutrandname(int Num, char Arr[][10])
{
	printf("%s\n", Arr[Num]);
}

void OutPutrandnameno(char Allname[][10])
{
	int Randnum = 0, a = 1, leng = _CREW;
	while (a)
	{
		Randnum = rand() % leng;
		printf("%s\n", Allname[Randnum]);
		//进行将人员进行删除替换
		for (int i = Randnum; i < leng; i++)
		{
			strcpy(Allname[Randnum], Allname[Randnum + 1]);
		}
		leng--;
		printf("剩余人数:%d\n", leng);
		scanf("%d", &a);
	}

}
