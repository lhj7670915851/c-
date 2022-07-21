/**
 * @file 数组作为函数的参数.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * int size=sizeof(A)/sizeof(A[0]);
 */
#include<stdio.h>
int SumOfElements(int B[],int n)
{
    int i,sum=0;
    int size=sizeof(B)/sizeof(B[0]);
    /*sizeof(B)=8时编译器的问题,应该显示4*/
    printf("SumOfElements(int *A,int n) sizeof(A)=%d,sizeof(A[0]=%d\n",sizeof(B),sizeof(B[0]));
    printf("SumOfElements(int *A,int n) A len=%d\n",size);
    for(i=0;i<n;i++)
        sum+=B[i];
    return sum;
}
int main()
{
    // int SumOfElements(int B[],int n);
    int A[]={1,3,5,7,9};
    int n=sizeof(A)/sizeof(A[0]);
    int total=SumOfElements(A,n);
    printf("total=%d\n",total);
    printf("main() sizeof(A)=%d,sizeof(A[0]=%d\n",sizeof(A),sizeof(A[0]));
    printf("main()A len=%d\n",n);
}