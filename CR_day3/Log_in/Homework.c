#include <stdio.h>
#include <string.h>
/*
	* Project content��Login authentication system
	* Creating time: 2021-06-30
	* Founder: Jingjie
	* Code function�������û��������룬�����ȷ��ʾ����¼�ɹ�����ʧ����ʾ����������3�κ��˳�
*/
//���ܺ���
void EncrypTion(char* arr);
int main(int argc, char* argv[])
{
	//���ó�ʼֵ
	char cUsr[9] = "AFU[nCZu", cPasswd[9] = "PC[ewvYt", cUsername[9] = "0", cUserpasswd[9] = "0";
	int a = 3;
	while(a)
	{
		//�û�������Ϣ
		printf("Name: ");
		scanf("%8s", &cUsername);
		printf("Password: ");
		scanf("%8s", &cUserpasswd);
		EncrypTion(cUsername);
		EncrypTion(cUserpasswd);
		//�ж��û������Ƿ���ȷ
		if (strcmp(cUsr , cUsername) == 0 && strcmp(cPasswd , cUserpasswd) == 0)
		{
			//��¼�ɹ����˳�
			printf("Login successfully!!\n");
			break;
		}
		else
		{
			printf("%s  %s \n",cUsr,cUsername);
			printf("%s  %s \n",cPasswd,cUserpasswd);
			//��������ӡ�����ʾ
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