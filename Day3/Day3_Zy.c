#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdint.h>     //��׼��С����
#include <stddef.h>

int main(int argc, char* argv[])
{

	char number1 = 0;
	int number2 = 0;
	unsigned int number3 = 0;
	float number4 = 0;
	char number5[] = "";
	int *number6;
	short int number7 = 0;
	_int32 number8 = 0;
	_int64 number9 = 0;
	intmax_t number10 = 0;
	long double number11 = 333.2222222222222;
	long long int number12 = 12222222222222222;
	
	//scanf("%c",&number1);                  
	//printf ("number��%c\n",number1);   //1��%c���һ���ַ�

	//scanf("%d",&number2);
	//printf ("number��%d\n",number2);   //2��%d���һ������

	//scanf("%i",&number2);
	//printf ("number��%i\n",number2);   //3��%i���һ������

	//scanf("%d",&number3);
	//printf ("number��%o\n",number3);   //4��%o�԰˽�����ʽ����޷�������

	//scanf("%u",&number3);             
	//printf ("number��%u\n",number3);   //5��%u�԰˽�����ʽ����޷�������

	//scanf("%d",&number3);             
	//printf ("number��%x\n",number3);   //6��%x��ʮ���������һ���޷���������Сд��
	//printf ("number��%X\n",number3);   //	 %X��ʮ���������һ���޷�����������д��

	//scanf("%e",&number4);             
	//printf ("number��%e\n",number4);   //7��%e�Կ�ѧ�������������(Сдe)
	//printf ("number��%E\n",number4);   //	 %E�Կ�ѧ�������������(��дE)

	//scanf("%f",&number4);             
	//printf ("number��%.5f\n",number4);   //8�� %f��С���������(Сдe)

	//scanf("%f",&number4);             
	//printf ("number��%g\n",number4);   //9�� %gȥ����������0

	//scanf("%f",&number4);             
	//printf ("number��%a\n",number4);    //10��  %a��һ��ʮ�����Ƶ��������������Сд��
	//printf ("number��%A\n",number4);    //      %A��һ��ʮ�����Ƶ����������������д��
       

	//printf ("number2�����ַ��%p\n",&number6);   // 12�� %p���Ա�����ʾΪʮ������������ʽ�ĵ�ַ��

	//scanf("%s",number5);
	//printf ("����ַ�����%s\n",&number5);            // 13�� %s����ַ���

	//scanf("%d",&number2);
	//printf ("number��%-d\n",number2);               //15��-�����
	//printf ("number��%+d\n",number2);               //16�����ֵΪ�з�������
	//printf ("number��%04d\n",number2);               //17�����0


	//scanf("%d",&number3);
	//printf ("number��%#o\n",number3);                 
	//printf ("number��%#x\n",number3);                 //18��#�ֱ�ʹ��0��0x��0��X ����Ϊ�κη������ֵ��ǰ׺

	
	//scanf("%c",&number1);                  
	//printf ("number��%hhd\n",number1);
	//printf ("number��%hhi\n",number1);
	//printf ("number��%hho\n",number1);
	//printf ("number��%hhx\n",number1);
	//printf ("number��%hhX\n",number1);              //20��hh  ==> char��unsigned char

	//scanf("%d",&number7);                  
	//printf ("number��%hd\n",number7);
	//printf ("number��%hi\n",number7);
	//printf ("number��%ho\n",number7);
	//printf ("number��%hx\n",number7);
	//printf ("number��%hX\n",number7);              //21��h  ==> short int��short unsigned int 

	//scanf("%d",&number8);                  
	//printf ("number��%I32d\n",number8);
	//printf ("number��%I32i\n",number8);
	//printf ("number��%I32o\n",number8);
	//printf ("number��%I32x\n",number8);
	//printf ("number��%I32X\n",number8);             //22��I32  ==> __int32��unsigned __int32

	//scanf("%d",&number9);                  
	//printf ("number��%I64d\n",number9);
	//printf ("number��%I64i\n",number9);
	//printf ("number��%I64o\n",number9);
	//printf ("number��%I64x\n",number9);
	//printf ("number��%I64X\n",number9);            //23��I64  ==> __int64��unsigned __int64
	

	//printf ("number��%la\n",number11);
	//printf ("number��%lA\n",number11);
	//printf ("number��%le\n",number11);
	//printf ("number��%lE\n",number11);
	//printf ("number��%lf\n",number11);
	//printf ("number��%lg\n",number11);
	//printf ("number��%lG\n",number11);            //25��l (Сд L) �� L   ==> long double

/*	printf ("number��%lld\n",number12);
	printf ("number��%lli\n",number12);
	printf ("number��%llo\n",number12);
	printf ("number��%llu\n",number12);
	printf ("number��%llx\n",number12);
	printf ("number��%llX\n",number12);   */        //26��ll (Сд�� LL)   ==�� long long int



	//char str1[] = "Hello";
	//char str2[] = "world";
	//char *pstart = str1;
	//char *pend = str2;
	//ptrdiff_t difp =  pstart - pend;
	//printf("%Id\n", difp);                             //27��%I  ==> ptrdiff_t��ptrdiff_t���ͱ���ͨ��������������ָ����������Ľ����

	

	//int i = 1333;                                        //����һ��int���͵ı���i
	//size_t size = sizeof(i);                             //��sizeof�����õ�����i�����͵Ĵ�С
	//printf("%Id\n", size);                              // 28��z �� I����д�� i�� ==��size_t

/*
	char number13[] = "���";
	printf("%ls\n", number13);    */                     

	return 0;

	//11��  %n   ����
	//14��  %Z   ����

}