/**
 * @file 杨辉三角形.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 求前10行
 * 1
 * 1  1
 * 1  2  1
 * 1  3  3  1
 * 1  4  6  4  1
 * 1  5  10 10  5 1
 * .  .  .  .  .  .
 * .  .  .  .  .  .
 * .  .  .  .  .  .
 */
#include<stdio.h>
int main()
{
    int a[11][11];  //不能定义a[10][10]会溢出
    a[0][0]=1;
    for(int i=1;i<=10;i++)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
        a[i][1]=1;
        a[i][j-1]=1;        //是j-1不是j因为跳出循环时j会加1
        // printf("%d",j);
    }
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}