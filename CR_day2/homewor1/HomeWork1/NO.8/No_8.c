#include <stdio.h>
/*
	* Project content����дһ����������2��ѧ����������ѧ�š�Ӣ���ѧ��������ɼ������������ѧ����������ѧ�ź�ƽ���֡� 
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
typedef struct _Studentinfo
{
	char name[10];
	int student_number[50];
	int El;
	int Mm;
	int Cp;
}Studentinfo;
int main(int argc, char* argv[])
{
	int i = 0, y = 0;
	Studentinfo stuinfo[2] = {0};
    for (i = 0; i < 2; i++)
    {
		printf("������ѧ��%d����Ϣ:", i + 1);
        printf("\nName:");
		scanf("%s", &stuinfo[i].name);
		printf("\nStudent_number:");
		scanf("%d", &stuinfo[i].student_number);
		printf("\nEnglish scores:");
		scanf("%d", &stuinfo[i].El);
		printf("\nMath scores:");
		scanf("%d", &stuinfo[i].Mm);
		printf("\nComputer score:");
		scanf("%d", &stuinfo[i].Cp);
		system("cls");
	}
	for (y = 0; y < 2; y++)
    {
		printf("����:%s  ѧ��:%d  ƽ����:%d\n", stuinfo[y].name , stuinfo[y].student_number , (stuinfo[y].El + stuinfo[y].Mm + stuinfo[y].Cp)/3);
	}
	system("pause");
	return 0;
}