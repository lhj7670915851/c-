/**
 * @file 指针和数组.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main()
{
    int A[]={1,3,5,7,9};
    printf("A=%d\n",A);
    printf("&A[0]=%d\n",&A[0]);
    printf("A+1=%d\n",A+1);
    printf("A[0]=%d\n",A[0]);
    printf("*A=%d\n",*A);
    printf("*(A+1)=%d\n",*(A+1));
    printf("*(A)+10=%d\n",*(A)+10);
}