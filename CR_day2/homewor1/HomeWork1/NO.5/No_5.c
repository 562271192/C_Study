#include <stdio.h>
/*
	* �ο���L2_6.C��дһ�����򣬴Ӽ��������ַ������硯1������ת����ʮ����������1�������������ʾ����1����ASCII��Ϊʮ������49�������ȥһ��������ʮ����1���ɡ�
	* Creating time: 2021-06-29
	* Founder: Jingjie
*/
int main(int argc, char* argv[])
{
	char a = 0;
	int  b = 0;
	printf(" Number:");
	scanf("%c", &a );
	b = (int)a - 48;
	printf(" DEC:%d\n", b);
	system("pause");
	return 0;
}