/**
 * @file 函数指针数组-将数组元素倒序.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * int inv(int b[],int n)函数内部功能可以看一看
 */
#include<stdio.h>
int main()
{
    int inv(int b[],int n);
    int a[6]={1,2,3,4,5,6},i;
    for(int i=0;i<6;i++)
        printf("%3d",a[i]);
    printf("\n");
    inv(a,6);
    for(int i=0;i<6;i++)
        printf("%3d",a[i]);
    return 0;
}
int inv(int b[],int n)
{
    int temp,m,i,j;
    if(n%2!=0)
        m=(n-1)/2;
    else
        m=n/2;
    for(i=0;i<m;i++)
    {
        temp=b[i];
        b[i]=b[n-i-1];
        b[n-i-1]=temp;
    }
    return 0;
}