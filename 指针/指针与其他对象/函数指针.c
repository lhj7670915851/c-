/**
 * @file 函数指针.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * ①此指针变量指向的是整个函数栈的首地址，函数名相当于地址
 * ②类型名 (*指针变量名) (函数的形参列表)
 * ③有a,b两个整数用户输入1,2,3分别代表求最大值,最小值,两数和
 * ④自定义函数定义放在main函数前相当于声明+定义
 */
#include<stdio.h>
void fun(int x,int y,int (*p)(int,int))
{
    printf("result=%d\n",(*p)(x,y));
}
int max(int x,int y)
{
    int z;
    if(x>y) z=x;
    else    z=y;
    return z;
}
int min(int x,int y)
{
    int z;
    if(x<y) z=x;
    else    z=y;
    return z;
}
int sum(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a=65,b=23;
    int guess=3;
    if(guess==1)    fun(a,b,max);
    else if(guess==2)   fun(a,b,min);
    else if(guess==3)   fun(a,b,sum);
    return 0;
}