#include<stdio.h>
int main()
{
    int a[2][2]={{3,5},{34,12}};
    int max=a[0][0];
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            if(a[i][j]>a[0][0])
                a[0][0]=a[i][j];
     // printf("%d",max);
    printf("%d",a[0][0]);
}