/**
 * @file 指针和动态内存-栈vs堆.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * ①栈存放函数和局部变量,堆存放动态变量
 * ②calloc会初始化为0,malloc是先存放一些随机数
 */
#include<stdio.h>
int main()
{
    // 为一直不知道大小的数组分配动态内存,此时为动态数组
    int n=3;
    int *A=(int *)malloc(n*sizeof(int));    //等效于下面两句
    // int *A=(int *)calloc(n,sizeof(int));
    // int *A=(int *)realloc(NULL,n*sizeof(int));
    for (int i;i<n;i++)
        A[i]=i+1;
    int *B=(int *)realloc(A,2*n*sizeof(int));
    printf("A=%d,B=%d\n",A,B);
    for(int i=0;i<n;i++)
        printf("%d\n",B[i]);
    free(A);
    free(B);    //注意释放的是地址等效于
    // int *B=(int *)realloc(B,0);
}