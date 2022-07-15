#include<stdio.h>
int main()
{   
    //二维数组是按行存放的，所以必须指定列数（第二个维度）即一行包含多少个元素
    int sum (int a[][5]) ;
    // int sum ;
    int a[5][5]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d",sum(a));
    // return sum = sum(a);
    return 0;
}
int sum(int a[][5])
{
    int sum=0,i,j;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(i==j)  sum = sum+a[i][j];
    return sum;
}