#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    printf("*q=%d\n",*q);
    printf("**q=%d\n",**q);
    printf("**r=%d\n",**r);
    printf("***r=%d\n",***r);
    printf("&x=%d\n",&x);
    printf("x=%d\n",x);
}