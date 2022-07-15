/*冒泡排序：输入5个数字并从大到小排序*/
#include<stdio.h>
int main()
{
    int a[5]={34,23,89,23,100};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            int temp;
            if(a[j]<a[j+1])
            { 
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
            for(int i=0;i<5;i++)
        {
            printf("%d  ",a[i]);
        }

}