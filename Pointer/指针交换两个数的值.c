/**
 * @file 指针交换两个数的值.c
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
    int *p1,*p2,*p,max=3,min=5;
    p1=&max;
    p2=&min;
    printf("max=%d,min=%d\n",*p1,*p2);
    if(max<min)
    {
        p=p1;
        p1=p2;
        p2=p;
    }
    printf("max=%d,min=%d\n",max,min);
    printf("max=%d,min=%d",*p1,*p2);
    return 0;
}