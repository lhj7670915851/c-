/**
 * @file 用指针输出数组.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 为什么要把a赋给p,因为p是指针变量a是指针常量
 */
#include<stdio.h>
int main()
{
    int a[5]={5,3,4,6,8},*p;
    p=a;     //p=&a[0];
    // 法一：
    for(int j=0;j<5;j++,p++)
        printf("%3d",*p);
    printf("\n");
    // 法二：
    for(p=a;p<(a+5);p++)    //p+5代表从a[0]开始的五个地址
        printf("%3d",*p);
    return 0;
}