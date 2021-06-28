#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define _CREW 5                                      //定义总人数

void Startloop(int num, char Arr[][10]);                      //程序监听
void OutPutallname(int Num, char Arr[][10]);        //输出所有人姓名
void OutPutrandname(int Num, char Arr[][10]);       //随机进行点名输出(可重复)
void OutPutrandnameno(char Arr[][10]);              //随机进行点名输出(不可重复)
