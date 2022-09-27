#include<stdio.h>
#include <stdlib.h>
typedef struct Student{
    long num;
    float score;
    struct Student *next;
} Student;

int n;
Student * create(){
    Student *head,*p1,*p2;  //p1不一定是第一个节点，而是当前输入的节点,此时*head,*p1,*p2均指向同一个地址
    n = 0 ;
    //开辟新结点 同时使p1 p2指向该结点
    p1=p2=(struct Student *)malloc(sizeof(Student));  
    scanf("%d %f",&p1->num,&p1->score);
    //此时head的指向为NULL
    head = NULL;
    while(p1->num != 0){
    //n代表结点数
        n=n+1;
        if(n==1){
        //n=1 说明该结点是第一个结点 使head指向该结点
            head = p1;
        }else{
        //如果不是头结点 把p1所指向的结点链接在p2所指向结点的后面
            p2->next = p1;
        }
        //使p2向前移p2->next=p1->next 即指向p2
        p2 = p1;
        //开辟新结点(不要把p1看成第一个节点) 使p1指向它
        p1 = (Student *)malloc(sizeof(Student));
        scanf("%d %f",&p1->num,&p1->score);
    }
    //循环退出之后 使p2指向NULL 因为链表的尾结点指向NULL
    p2->next = NULL;
    return head;
}

int main(){
    Student *pt;
    pt = create();
    printf("\nnum:%d\nscore:%5.1f\n",pt->num,pt->score );
    return 0;
}