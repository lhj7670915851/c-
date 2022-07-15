#include<stdio.h>
int main()
{
    int x1=3,x2=4,x3=12;
    int i=1;
    while(1)
    {
        if(i%x1==0 && i%x2==0 && i%x3==0)
        break;
        i++;
    }
    printf("%d",i);
    return 0;
}