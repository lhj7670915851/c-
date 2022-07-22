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
 *  ③若新位置已经放了数,则将其放入原来数的正下方(即下一行的 同一列)
 *  ④使用动态内存分配与释放函数malloc()与free(),使用动态内存管理的二维数组,在程序执行过程中动态分配与释放内存，这样做的好处是使代码具有通用性，
 *  同时提高内存的使用率。
 **/
#include<stdio.h>
#include<stdlib.h>
int array(int n)
{
    int i, j, num, max;
    if(n%2 == 0)  /*n是偶数，则加1使其变为奇数*/
    { 
        n=n+1;
    }
    max=n*n;
	int** p = (int**)malloc(n * sizeof(int*));   /*为魔方阵分配内存*/
	for (int i = 0; i < n; i++)                 /*先分配行再分配列*/
		p[i] = (int*)malloc(n * sizeof(int));   /*p[i]与*(p+i)等价*/
    p[0][n/2]=1;  /* 将1存入数组*/
    i=0;        /*自然数1所在行*/
    j=n/2;      /*自然数1所在列*/
    for(num=2; num<=max; num++)     /*从2开始确定每个数的存放位置*/
    {
        i=i-1;
        j=j+1;
        if(i<0)  /*当前数在第0行*/
            i=n-1;
        if(j>n-1)  /*当前数在最后一列*/
            j=0;
        if(&p[i][j]!=NULL)   /*当前数已经有位置时*/
        {
            i+=2;
            j-+j;
        }
        p[i][j]=num;  /*找到当前数在数组中的存放位置*/    
    }
    /*打印生成的魔方阵*/
    for(int i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%3d", p[i][j]);            // 二维指针输出的方式
        }
    }
    free(p);
    return 0;
}

int main()
{
    int n;
    n=5;
    // printf("请输入n值:\n");
    // scanf("%d", &n);
    array(n);  /*调用array函数*/
    return 0;
}