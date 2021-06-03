#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdint.h>     //标准大小类型
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
	//printf ("number：%c\n",number1);   //1、%c输出一个字符

	//scanf("%d",&number2);
	//printf ("number：%d\n",number2);   //2、%d输出一个整数

	//scanf("%i",&number2);
	//printf ("number：%i\n",number2);   //3、%i输出一个整数

	//scanf("%d",&number3);
	//printf ("number：%o\n",number3);   //4、%o以八进制形式输出无符号整数

	//scanf("%u",&number3);             
	//printf ("number：%u\n",number3);   //5、%u以八进制形式输出无符号整数

	//scanf("%d",&number3);             
	//printf ("number：%x\n",number3);   //6、%x以十六进制输出一个无符号整数（小写）
	//printf ("number：%X\n",number3);   //	 %X以十六进制输出一个无符号整数（大写）

	//scanf("%e",&number4);             
	//printf ("number：%e\n",number4);   //7、%e以科学技术法进行输出(小写e)
	//printf ("number：%E\n",number4);   //	 %E以科学技术法进行输出(大写E)

	//scanf("%f",&number4);             
	//printf ("number：%.5f\n",number4);   //8、 %f以小数进行输出(小写e)

	//scanf("%f",&number4);             
	//printf ("number：%g\n",number4);   //9、 %g去掉后面多余的0

	//scanf("%f",&number4);             
	//printf ("number：%a\n",number4);    //10、  %a以一个十六进制的数输出浮点数（小写）
	//printf ("number：%A\n",number4);    //      %A以一个十六进制的数输出浮点数（大写）
       

	//printf ("number2储存地址：%p\n",&number6);   // 12、 %p将自变量显示为十六进制数字形式的地址。

	//scanf("%s",number5);
	//printf ("输出字符串：%s\n",&number5);            // 13、 %s输出字符串

	//scanf("%d",&number2);
	//printf ("number：%-d\n",number2);               //15、-左对齐
	//printf ("number：%+d\n",number2);               //16、输出值为有符号类型
	//printf ("number：%04d\n",number2);               //17、填充0


	//scanf("%d",&number3);
	//printf ("number：%#o\n",number3);                 
	//printf ("number：%#x\n",number3);                 //18、#分别使用0、0x或0，X 以作为任何非零输出值的前缀

	
	//scanf("%c",&number1);                  
	//printf ("number：%hhd\n",number1);
	//printf ("number：%hhi\n",number1);
	//printf ("number：%hho\n",number1);
	//printf ("number：%hhx\n",number1);
	//printf ("number：%hhX\n",number1);              //20、hh  ==> char、unsigned char

	//scanf("%d",&number7);                  
	//printf ("number：%hd\n",number7);
	//printf ("number：%hi\n",number7);
	//printf ("number：%ho\n",number7);
	//printf ("number：%hx\n",number7);
	//printf ("number：%hX\n",number7);              //21、h  ==> short int、short unsigned int 

	//scanf("%d",&number8);                  
	//printf ("number：%I32d\n",number8);
	//printf ("number：%I32i\n",number8);
	//printf ("number：%I32o\n",number8);
	//printf ("number：%I32x\n",number8);
	//printf ("number：%I32X\n",number8);             //22、I32  ==> __int32、unsigned __int32

	//scanf("%d",&number9);                  
	//printf ("number：%I64d\n",number9);
	//printf ("number：%I64i\n",number9);
	//printf ("number：%I64o\n",number9);
	//printf ("number：%I64x\n",number9);
	//printf ("number：%I64X\n",number9);            //23、I64  ==> __int64、unsigned __int64
	

	//printf ("number：%la\n",number11);
	//printf ("number：%lA\n",number11);
	//printf ("number：%le\n",number11);
	//printf ("number：%lE\n",number11);
	//printf ("number：%lf\n",number11);
	//printf ("number：%lg\n",number11);
	//printf ("number：%lG\n",number11);            //25、l (小写 L) 或 L   ==> long double

/*	printf ("number：%lld\n",number12);
	printf ("number：%lli\n",number12);
	printf ("number：%llo\n",number12);
	printf ("number：%llu\n",number12);
	printf ("number：%llx\n",number12);
	printf ("number：%llX\n",number12);   */        //26、ll (小写的 LL)   ==》 long long int



	//char str1[] = "Hello";
	//char str2[] = "world";
	//char *pstart = str1;
	//char *pend = str2;
	//ptrdiff_t difp =  pstart - pend;
	//printf("%Id\n", difp);                             //27、%I  ==> ptrdiff_t（ptrdiff_t类型变量通常用来保存两个指针减法操作的结果）

	

	//int i = 1333;                                        //定义一个int类型的变量i
	//size_t size = sizeof(i);                             //用sizeof操作得到变量i的类型的大小
	//printf("%Id\n", size);                              // 28、z 或 I（大写的 i） ==》size_t

/*
	char number13[] = "你好";
	printf("%ls\n", number13);    */                     

	return 0;

	//11、  %n   不会
	//14、  %Z   不会

}