/**
 * @file 魔方阵 .c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 * 题意：输入n输出n阶方针，要求每行每列及其对角线的元素（必须历经0 — n的平方的每一个数）和都相等。
 *算法设计
 *  ①数字1位于第一行的正中间
 *  ②下一个数放在上一个数的右上角(即上一行下一列),若无上一行则放到最后一行,若无下一列1则放到第一列
 *  ③若新位置已经放了数,则将其放入该数的正下方(即下一行的 同一列)
 *  ④使用动态内存分配与释放函数malloc()与free()，在程序执行过程中动态分配与释放内存，这样做的好处是使代码具有通用性，
 *  同时提高内存的使用率?
 **/
#include<stdio.h>
#include<stdlib.h>
int array(int n)
{
    int i, j, no, num, max;
    int *mtrx;
    if(n%2 == 0)  /*n是偶数，则加1使其变为奇数*/
    {
        n=n+1;
    }
    max=n*n;
    mtrx=(int *)malloc(max+max);  /*为魔方阵分配内存*/
    mtrx[n/2]=1;  /* 将1存入数组*/
    i=0;  /*自然数1所在行*/
    j=n/2;  /*自然数1所在列*/
    /*从2开始确定每个数的存放位置*/
    for(num=2; num<=max; num++)
    {
        i=i-1;
        j=j+1;
        if((num-1)%n == 0)  /*当前数是n的倍数*/
        {
            i=i+2;
            j=j-1;
        }
        if(i<0)  /*当前数在第0行*/
        {
            i=n-1;
        }
        if(j>n-1)  /*当前数在最后一列，即n-1列*/
        {
            j=0;
        }
        no=i*n+j;  /*找到当前数在数组中的存放位置*/
        mtrx[no]=num;
    }
    /*打印生成的魔方阵*/
    printf("生成的%d-魔方阵为:",n);
    no=0;
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%3d", mtrx[no]);
            no++;
        }
    }
    printf("\n");
    free(mtrx);
    return 0;
}

int main()
{
    int n;
    n=5;
    // printf("请输入n值:\n");
    scanf("%d", &n);
    array(n);  /*调用array函数*/
    return 0;
}