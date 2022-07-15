/*选择排序：输入5个数字并从大到小排序*/
#include<stdio.h>
int main()
{
    int a[5]={34,23,89,23,100};
    for(int i=0; i<5; i++)
    {
        for(int j=5-i; j>i; j--)
        {
            if(a[j]>a[i])
            {
                int temp;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%5d",a[i]);
    }
}

