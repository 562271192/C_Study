#include <stdio.h>
/*
	* Project content：编写一个程序，输入2个学生的姓名、学号、英语、数学、计算机成绩，输出这两个学生的姓名、学号和平均分。 
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
		printf("请输入学生%d的信息:", i + 1);
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
		printf("姓名:%s  学号:%d  平均分:%d\n", stuinfo[y].name , stuinfo[y].student_number , (stuinfo[y].El + stuinfo[y].Mm + stuinfo[y].Cp)/3);
	}
	system("pause");
	return 0;
}
