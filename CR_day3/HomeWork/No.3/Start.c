#include <stdio.h>
#include <string.h>
/*
	* Project content����дһ������Ҫ���������յ������յ�������
	* Creating time: 2021-06-30
	* Founder: Jingjie
*/
int SunDay(int month, int day, int i); //��������
int LeapYear(int year);                //�ж�����

int main(int argc, char* argv[])
{
	//���ó�ʼֵ
	int Year1[3] = {2006, 4, 19};
	int Year2[3] = {2008, 4, 19};
	int Yeardiff = 0, i = 0, Days = 0 , temp = 0 , Max = 0, Min = 0;
	printf("�����������:");
	scanf("%d",&Year2[0]);
	printf("�����������:");
	scanf("%d",&Year2[1]);
	printf("�����������:");
	scanf("%d",&Year2[2]);
	//Year2ʼ��Ϊ���ֵ,Year1ʼ��Ϊ��Сֵ
	if ((Year1[0] > Year2[0]) || (Year1[0] == Year2[0] && Year1[1] > Year2[1]) || (Year1[0] == Year2[0] && Year1[1] == Year2[1] && Year1[2] > Year2[2]))
	{
		for (i = 0; i < 3; i++)
		{
			temp = Year1[i];
			Year1[i] = Year2[i] ;
			Year2[i] = temp;
		}
	}

	printf("%d %d \n",Year1[2],Year2[2]);
	//�ж����Ƿ���ͬ
	if (Year2[0] == Year1[0])
	{
		Yeardiff = 0;
	}
	else
	{
		Yeardiff = Year2[0] - Year1[0] - 1;
	}
	//һ���ж����� == ������
	Days = Yeardiff * 365;
	for (i = 0; i < Yeardiff; i++)
	{
		if (LeapYear(Year1[0] + i) == 1)
		{
			Days += 1;
		}
	}
	printf("%d  \n",Days);
	if (Year1[0] != Year2[0])
	{
		//��ݲ��ȵ����
		//��Сֵ������
		temp = SunDay(Year1[1],Year1[2],LeapYear(Year1[0]));
		if (LeapYear(Year1[0] == 1))
		{
			temp = 366 - temp;
		}
		else
		{
			temp = 365 - temp;
		}
		Days += temp - 1;
		printf("%d  \n",Days);
		//���ֵ������
		Days += SunDay(Year2[1],Year2[2],LeapYear(Year2[0]));
	}
	else if(Year1[0] == Year2[0] && Year1[1] != Year2[1])
	{
		//�����ͬ���·ݲ�ͬ�����
		Max = SunDay(Year2[1],Year2[2],LeapYear(Year2[0]));
		Min = SunDay(Year1[1],Year1[2],LeapYear(Year1[0]));
		Days = Days + Max - Min;

	}
	else if(Year1[0] == Year2[0] && Year1[1] == Year2[1] && Year1[2] != Year2[2])
	{
		//�����ͬ���·���ͬ���ղ�ͬ�����
		Max = Year2[2];
		Min = Year1[2];
		Days = Days + Max - Min;
	}
	else
	{
		//�����ͬ���·���ͬ������ͬ�����
		Days = Days;
	}
	//����ܹ�������
	printf("SunDay: %d\n",Days);
	if (Days % 23 > 0 && Days % 23 < 11)
	{
		printf("�����߳��� ");
	}
	else
	{
		printf("�����ͳ��� ");
	}
	if (Days % 28 > 0 && Days % 23 < 14)
	{
		printf(" �����߳��� ");
	}
	else
	{
		printf(" �����ͳ��� ");
	}
	if (Days % 33 > 0 && Days % 23 < 16)
	{
		printf("�����߳���\n ");
	}
	else
	{
		printf("�����ͳ���\n ");
	}
	system("pause");
	return 0;
}



int SunDay(int month, int day, int i)
{
	int sun = 0;
	switch (month)
	{
		case 1: 
		{
			sun = day;
			break;
		}
		case 2:
		{
			sun = 31 + day;
			break;
		}
		case 3:
		{
			sun = 59 + day + i;
			break;
		}
		case 4:
		{
			sun = 90 + day + i;
			break;
		}
		case 5:
		{
			sun = 120 + day + i;
			break;
		}
		case 6:
		{
			sun = 151 + day + i;
			break;
		}
		case 7:
		{
			sun = 181 + day + i;
			break;
		}
		case 8:
		{
			sun = 212 + day + i;
			break;
		}
		case 9:
		{
			sun = 243 + day + i;
			break;
		}
		case 10:
		{
			sun = 273 + day + i;
			break;
		}
		case 11:
		{
			sun = 304 + day + i;
			break;
		}
		case 12:
		{
			sun = 334 + day + i;
			break;
		}
	}
	return sun;
}
/*
int JudgmentMoth(int moth, int i)
{
	int x[7] ={1, 3, 5, 7, 8, 10, 12} ;
	int y = 0;
	if(moth == 2)
	{
		return 28 + i;
	}
	else
	{
		for (y = 0; y < 7; y++)
		{
			if (x[y] == moth)
			{
				return 31;
			}
		}
		return 30;
	}
}
*/
//�ж�����
int LeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	return 0;
}
