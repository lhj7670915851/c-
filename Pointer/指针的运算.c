/**
 * @file 指针的运算.c
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
    int a[5]={5,3,4,6,8},*p=&a[2];
    //p[i]的含义*(p+i)的值,p++是指整形指针变量指向下一个元素的地址。值和地址的最终值均要看p的初始值
    printf("%3d\n",p[1]);
    //*p++:先输出*p的值再使p指向下一个变量,*和++优先级相同均是从右自左运算(p++是先输出p再++;++p是先加再输出p)相当于*(p++)
    p=a; 
    for(int j=0;j<5;j++)
        printf("%3d",*p++);
    //++(*p):p指向的1元素值加1不是指针地址指向下一个
    return 0;
}