/**
 * @file 二维数组的行列互换.c
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
    int a[2][3]={{1,2,3},{4,5,6}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);  
        }
        printf("\n");
    }
    int  b[3][2];
    printf("转置后的矩阵：\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            b[i][j]=a[j][i];
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
}