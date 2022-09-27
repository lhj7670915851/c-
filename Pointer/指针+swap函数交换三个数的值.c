/**
 * @file 指针+swap函数交换三个数的值.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 将a,b,c按从大到小的顺序输出
 */
#include<stdio.h>
int main()
{
    void swap(int *x,int *y);
    int *p1,*p2,*p3,a=5,b=45,c=12;
    p1=&a;
    p2=&b;
    p3=&c;
    if(b>a) swap(p2,p1);
    if(c>a) swap(p3,p1);
    if(c>b) swap(p3,p2);
    printf("a>b>c : %d > %d > %d",a,b,c);
    return 0;
    
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    // return 0;
}