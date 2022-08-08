/**
 * @file 动态内存分配.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
//  * ①堆栈:非静态的局部变量(包括形参)在内存的动态存储区也就是栈(先进后出);内存动态分配区域是堆(先进先出)(临时数据随时开辟随时释放)
//  * ②动态分配库函数:malloc(开辟100个字节的分配域空间不足返回null函数值是第一个字节的地址:malloc(100)),
//  *                calloc(分配100个长度为4的连续空间并把首地址给指针变量p:p=calloc(100,4)),
//  *                free(释放指针p所指向的动态空间:free(p)),
//  *                realloc(改变已经分配的空间域的大小将p所指向的空间改为50个字节:realloc(p,50))
//  * ③void *p:void的指针变量,初始不指向任意类型,当被赋值时候自动转换成对应的数据类型;上面四个库函数均属于void类型指针函数
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    void check(int a[]);
    int *p,a[5]={59,77,89,23,98};
    p=(int *)malloc(5*sizeof(int));
    p=a;            //可要可不要跟check函数只用到a数组即可
    check(p);
    free(p);
    return 0;
}
void check(int a[])
{
    for(int i=0;i<5;i++)
        if(a[i]<60)
            printf("%3d",a[i]);
}