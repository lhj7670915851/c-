/**
 * @file 静态链表.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * (*p).num == p->num : 结构体指针变量(变量指向结构体一整块的首地址)指向该结构体num变量。括号不可省.的优先级大于*
 * 链表各元素在内存中可以不连续,“头指针指向第一个元素,表尾是NULL”
 * 
 */
#include<stdio.h>
struct Student
{
    int num;
    float score;
    struct Student *next;
}a={101,89.5},b={102,82.4},c={103,90.7};

int main()
{
    // printf("%d  %lf",a.num,a.score);
    struct Student *head,*p;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    p=head;
    do
    {
        printf("%d  %lf\n",p->num,p->score);
        p=p->next;  //相当于a.next指向b
    }while(p!=NULL);
    return 0;
}