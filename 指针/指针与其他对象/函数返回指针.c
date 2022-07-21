/**
 * @file 函数返回指针.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * 函数名相当于地址
 */
#include<stdio.h>
#include<stdlib.h>
int Add(int *a,int *b)
{
    int *c=*a+*b;
    return *c;
}
int main()
{
    int x=2,y=4;
    int *z=Add(&x,&y);
    printf("Sum=%d\n",z);
}