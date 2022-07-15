#include<stdio.h>
int main()
{
    int a[10][3]={{0,0,0},{1,1,1},{0,1,0},{1,1,1,},{1,0,1},{0,1,1},{1,0,1},{1,1,1},{1,0,1},{1,1,1}};
    for(int i=1;i<=10;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum==3)  printf("%d",i);
    }
    return 0;
}