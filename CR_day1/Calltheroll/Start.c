#include "MyFun.h"

/*
	* Project content：Roll call system
	* Creating time: 2021-06-08
	* Founder: JLkt45
	* Code function：
		随机点名系统（输入1~3）：
			输入1输出所有人名单
				按0进行退出
			输入2随机点名（可重复）
				按0进行退出
				按1继续点名
			输入3随机点名（不可重复）
				按0进行退出
				按1继续点名	
*/

int main(int agrc, char* argv)
{
	//system("chcp 65001");
	//设置初始值
	srand((unsigned)time(NULL));
	system("cls");
	int num = 0;
	char Allname[][10] =
	{
		................
	};

	//班级人员数量
	num = sizeof(Allname) / sizeof(Allname[0]);
	printf("<==========================>\n");
	printf("   1. 查看所有人姓名        \n");
	printf("   2. 随机点名（可重复)     \n");
	printf("   3. 随机点名（不可重复）  \n");
	printf("   4. 退出                  \n");
	printf("<==========================>\n");
	//进入监听事件
	Startloop(num, Allname);
	return 0;
}


