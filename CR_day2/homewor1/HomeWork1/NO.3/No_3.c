#include <stdio.h>
/*
	* Project content����дһ�����򣬴Ӽ��������뻪���¶ȣ���Ļ��ʾ��Ӧ�������¶ȡ������¶Ⱥ������¶ȵ�ת����ʽΪ�� c=(f-32)/1.8 ��
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	float f = 0;
	scanf("%f",&f);
	printf("Degree: %0.1f\n", (f-32)/1.8);
	system("pause");
	return 0;
}