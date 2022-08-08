/**
 * @file 函数传值vs传引用.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 运行过程均在栈(steak)中,程序运行时需要存储的内存包括堆,栈,全局/静态变量,指令(自增赋值等语句)
 */
#include<stdio.h>
void increment(int *a)
{
    *a=*a+1;
    printf("%d\n",a);
}
int main()
{
    int a;
    a=10;
    increment(&a);
    printf("%d\n",&a); 
    printf("%d\n",a);
}