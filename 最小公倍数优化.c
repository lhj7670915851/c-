#include<stdio.h>
int main()
{
    int x1=3,x2=4,x3=12;
    int i=1,X;
    while(1)
    {
        X=x3*i;
        if(X%x1==0 && X%x2==0 && X%x3==0)
        break;
        i++;
    }
    printf("%d",X);
    return 0;
}