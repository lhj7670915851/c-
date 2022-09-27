/**
 * @file 动态链表.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    int num;
    float score;
    struct Student *next;
};
int n;
struct Student* creat(void)
{
    struct Student* head;
    struct Student *p1,*p2;
    n=0;
    p1=p2=(struct Student*)malloc(LEN);
    scanf("%d,%lf",p1->num,p1->score);
    head=NULL;
    while(p1->next!=0)
    {
        n++;if(n==1)    head=p1;
        else p2->next=p1;
        p1=(struct Student* )malloc(LEN);
        scanf("%d,%lf",p1->num,p1->score);
    }
    p2->next=NULL;
    return(head);
}

int main()
{
    struct Student* pt;
    pt=creat();
    printf("\nnum:%d\n score::%lf\n",pt->num,pt->score);
    return 0;
}