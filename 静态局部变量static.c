/**
 * @file 静态局部变量static.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main()
{
    int f(int);
    int a=2,i;
    for(i=1;i<=3;i++)
        printf("%d\n",f(a));
    return 0;
}
int f(int a)
{
    auto int b=0;        //局部变量和形参默认为auto（自动变量在动态存储区）类型的变量
    static int c=3;     //静态变量属于静态存储类别在静态存储区，第二次循环的时候c没有释放且初始值为4
    b++;
    c++;
    return a+b+c;
}