#include <stdio.h>
#include <string.h>
/*
	* Project content��Login authentication system
	* Creating time: 2021-06-29
	* Founder: Jingjie
	* Code function�������û��������룬�����ȷ��ʾ����¼�ɹ�����ʧ����ʾ����������3�κ��˳�
*/
int main(int argc, char* argv[])
{
	//���ó�ʼֵ
	char usr[10] = "admin", passwd[15] = "admin123", U_name[10] = "0", U_passwd[15] = "0";
	int a = 3;
	while(a)
	{
		//�û�������Ϣ
		printf("Name: ");
		scanf("%s", &U_name);
		printf("Password: ");
		scanf("%s", &U_passwd);
		//�ж��û������Ƿ���ȷ
		if (strcmp(usr , U_name) == 0 && strcmp(passwd , U_passwd) == 0)
		{
			//��¼�ɹ����˳�
			printf("Login successfully!!\n");
			break;
		}
		else
		{
			//��������ӡ�����ʾ
			printf("ERROR:Incorrect account or password\n\n");
			a--;
		}
		//printf("%s%s\n", U_name, U_passwd);

	
	}
	system("pause");
	return 0;
}