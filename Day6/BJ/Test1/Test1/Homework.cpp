// Homework.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>


/*
* 
* 
* 1.编写程序将一个输入的十进制数转换成一个二进制数，并且显示
* 
* 2.求20的斐波那契数列
* 函数递归  
* 
* 1.如果第1项为1
* 2.如果第2项为1
* 3.求第1项 + 第2的项的和
* 4.显示和
* 5.第1项 = 第2项
* 6.第2项 = 和
* 
* 规律 => 求第1项 + 第2的项的和并显示
* 函数递归 ==> 每次递归都要消耗内存  ==> 无效递归无意义（无内存消耗)
* 
* 函数有限递归
*  1.第1项位1显示1
*  2.第2项等于第1项的fib
*  fib(1)  = 1
*  fib(2)  = 1
*  fib(3) = fib(2) + fib(1)
*  fib(4) = fib(3) + fib(2)
*  fib(5) = fib(4) + fib(3)
* 
* 阶乘
* !4  1 * 2 * 3 * 4
* 
* 递归
*/

int fib2(int count) {
    if (count == 1 || count == 2) { //递归结束条件，1或者2的fib结果为1
        //printf("[%d] 1\n", count);
        return 1;
    }     

    int result =  fib2(count - 1) + fib2(count - 2);
    //printf("[%d] %d\n", count, result);
    return result;
}

//
void fib1(int count) {
    unsigned int num1;
    unsigned int num2;
    unsigned int sum = 0;
    for (int i = 1; i <= count; i++) {
        if (i == 1) {
            num1 = 1;
            printf("%u \n", num1);
            continue;
        }

        if (i == 2) {
            num2 = 1;
            printf("%u \n", num2);
            continue;
        }

        sum = num1 + num2;
        printf("%u \n", sum);

        num1 = num2;
        num2 = sum;
    }
}

//递归阶乘  函数递归增加代码可读性
int MyMul(int num) {
    if (num == 1)  //递归结束条件，1的阶乘结果为1
        return 1;

    return num * MyMul(num - 1);
}

//利用递归倒序输出
//Binrary(16) => Binrary(8) ==> Binrary(4) ==> Binrary(2) ==> Binrary(1)
void Binrary(unsigned long num) {
    if (num == 1 || num == 0) { //递归结束条件，商为1或者为0
        printf("%ld ", num);
        return;
    }
  
    Binrary(num / 2);
    printf("%ld ", num % 2);
}

int main()
{
    //while (1);

    //fib2(5);

    ////循环阶乘
    //int num = 4;  //3!  3 * 2 * 1
    //int mul = num;
    //while (num != 1) {
    //    mul *= num - 1;
    //    num--;
    //}
    //printf("mul1:%d\n", mul);
    //printf("mul2:%d\n", MyMul(5));

    //递归 3! = 3 * 2!
    // 
    // 
    //fib1(10);
    //1 1 2 3 5 8 13 21
  
    //编写程序将一个输入的十进制数转换成一个二进制数，并且显示
    //递归实现
    //char num = 16; //0000 1001
    //while (num >= 1) {
    //    printf("%d ", num % 2);
    //    num = num / 2;
    //}
    //Binrary(0xf0);

    //循环转换二进制    64bit
    int num1 = 0xf0;    
    char bit1;
    char bit2;
    char bit3;
    char bit4;
    char bit5;
    char bit6;
    char bit7;
    char bit8;

    //变量有规律  ==> 数组

    bit1 = num1 % 2;
    num1 = num1 / 2;

    bit2 = num1 % 2;
    num1 = num1 / 2;

    bit3 = num1 % 2;
    num1 = num1 / 2;

    bit4 = num1 % 2;
    num1 = num1 / 2;

    bit5 = num1 % 2;
    num1 = num1 / 2;

    bit6 = num1 % 2;
    num1 = num1 / 2;

    bit7 = num1 % 2;
    num1 = num1 / 2;

    bit8 = num1 % 2;
    num1 = num1 / 2;

    printf("%d%d%d%d %d%d%d%d\n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);

    return 0;
}
