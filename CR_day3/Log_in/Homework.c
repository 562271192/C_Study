#include <stdio.h>
#include <string.h>
/*
	* Project content：Login authentication system
	* Creating time: 2021-06-30
	* Founder: Jingjie
	* Code function：输入用户名和密码，如果正确提示“登录成功”，失败提示其它，错误3次后退出
*/
//加密函数
void EncrypTion(char* arr);
int main(int argc, char* argv[])
{
	//设置初始值
	char cUsr[9] = "AFU[nCZu", cPasswd[9] = "PC[ewvYt", cUsername[9] = "0", cUserpasswd[9] = "0";
	int a = 3;
	while(a)
	{
		//用户输入信息
		printf("Name: ");
		scanf("%8s", &cUsername);
		printf("Password: ");
		scanf("%8s", &cUserpasswd);
		EncrypTion(cUsername);
		EncrypTion(cUserpasswd);
		//判断用户输入是否正确
		if (strcmp(cUsr , cUsername) == 0 && strcmp(cPasswd , cUserpasswd) == 0)
		{
			//登录成功后退出
			printf("Login successfully!!\n");
			break;
		}
		else
		{
			printf("%s  %s \n",cUsr,cUsername);
			printf("%s  %s \n",cPasswd,cUserpasswd);
			//输入错误打印相关提示
			printf("ERROR:Incorrect account or password\n\n");
			a--;
		}
		//printf("%s%s\n", U_name, U_passwd);

	
	}
	system("pause");
	return 0;
}
void EncrypTion(char* arr)
{
	int i = 0, z = 14;
	for (i = 0; i < 8; i ++)
	{
		arr[i] =48 + (arr[i] + i * (i + i ))% 80;
	}
	return 0;
}