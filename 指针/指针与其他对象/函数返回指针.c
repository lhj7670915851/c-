/**
 * @file 函数返回指针.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * ①函数名相当于地址,全局变量应该在所有函数外面包括main函数；
 * ②ascll中char类型与int一一对应可以用%d输出char类型相当于int类型的函数
 * ③栈空间会自动回收堆要free才会释放
 *④ 指令是一条条执行但是函数调用或者break等语句时会跳转
 */
#include<stdio.h>
#include<stdlib.h>
void PrintfHellWord()
{
    printf("HelloWord!\n");
}
int* Add(int *a,int *b)
{
    int *c=(int*)malloc(sizeof(int));
    *c=(*a)+(*b);
    printf("c adder=%d\n",c);
    // free(c);
    return c;
}
int main()
{
    int x=2,y=4;
    int *z=Add(&x,&y);
    PrintfHellWord();
    printf("z adder=%d\n",z);
    printf("Sum=%d\n",*z);
}