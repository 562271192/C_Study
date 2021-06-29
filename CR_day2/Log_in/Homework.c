#include <stdio.h>
#include <string.h>
/*
	* Project content：Login authentication system
	* Creating time: 2021-06-29
	* Founder: Jingjie
	* Code function：输入用户名和密码，如果正确提示“登录成功”，失败提示其它，错误3次后退出
*/
int main(int argc, char* argv[])
{
	//设置初始值
	char usr[10] = "admin", passwd[15] = "admin123", U_name[10] = "0", U_passwd[15] = "0";
	int a = 3;
	while(a)
	{
		//用户输入信息
		printf("Name: ");
		scanf("%s", &U_name);
		printf("Password: ");
		scanf("%s", &U_passwd);
		//判断用户输入是否正确
		if (strcmp(usr , U_name) == 0 && strcmp(passwd , U_passwd) == 0)
		{
			//登录成功后退出
			printf("Login successfully!!\n");
			break;
		}
		else
		{
			//输入错误打印相关提示
			printf("ERROR:Incorrect account or password\n\n");
			a--;
		}
		//printf("%s%s\n", U_name, U_passwd);

	
	}
	system("pause");
	return 0;
}
