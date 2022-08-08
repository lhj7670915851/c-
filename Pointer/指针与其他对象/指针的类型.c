/**
 * @file 指针的类型.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main()
{
    int a=1025;
    int *p;
    p=&a;       //p引用*p解引用
    printf("sizeof(int)=%d\n",sizeof(int));
    printf("p=%d , *p=%d\n",p,*p);
    printf("p+1=%d , *(p+1)=%d\n",p+1,*(p+1)); 
    char *p0;
    p0=(char*)p;
    printf("sizeof(char)=%d\n",sizeof(char));
    printf("p0=%d , *p0=%d\n",p0,*p0);
    printf("p0+1=%d , *(p0+1)=%d\n",p0+1,*(p0+1));
    //1025 = 00000000 00000000 00000100 00000001
    /*void指针类型*/
    void *p1;
    p1=p;
    printf("pl=%d",p1);
}