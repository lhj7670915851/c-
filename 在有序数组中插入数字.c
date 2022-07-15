#include<stdio.h>
int main()
{
    int a[5]={1,6,12,78};
    int b;
    scanf("%d",&b);
    for(int i=0;i<4;i++)  //i<sizeof(a)
    {
        if(a[i]<=b && b<=a[i+1])
        {
            for(int j=3;j>i;j--)
                a[j+1]=a[j];
            a[i+1]=b;
            // break;
            // printf("%d",j+1);
        } 
        break;   //没有输出,下面的循环也不能运行了？因为下面的for循环i没有给定初始值
    }
    for(int i=0;i<5;i++)
        printf("%5d",a[i]);
}