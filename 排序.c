/*输入5个数字并从大到小排序*/
#include<stdio.h>
int main()
{
    int a[5]={34,23,89,23,100};
    // printf("Please five number:");
    // for(int i=0; i<5; i++)
    //     scanf("%d",&a[i]);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-i; j++)
        {
            int temp;
            if(a[j]>a[i])
            {
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

