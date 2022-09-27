/**
 * @file 结构体变量和结构体变量指针作为函数形参.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * (1)用input函数输入数据及求个学生的平均值
 * (2)求平均成绩最高的学生
 * (3)输出成绩最高的学生信息
 */
#include<stdio.h>
#define N 3
struct Student {
    int num;
    char name[20];
    float score[3];
    float aver;
};
int main()
{
    void input(struct Student stu[]);
    struct Student* max(struct Student stu[]);
    void print(struct Student stu[]);
    struct Student stu[N],*p=stu;
    input(p);
    print(max(p));
    return 0;
}

void input(struct Student stu[])
{
    int i;
    printf("请输入各学生的信息(以空格隔开):学号,姓名,三门课的成绩:\n");
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d %s %f %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
        stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3;
    }
}

struct Student* max(struct Student stu[])
{
    int i,m=0;
    for(int i=0 ; i<N ; i++)
    {
        if(stu[i].aver>stu[m].aver)     m=i;
    }
    return &stu[m];
}

void print(struct Student stu[])
{
    printf("\n成绩最高的学生是:\n");
    printf("学号:%d\n姓名:%s\n三门课成绩:%.3lf , %.3lf , %.3lf\n平均成绩:%.3lf",
    stu->num,stu->name,stu->score[0],stu->score[1],stu->score[2],stu->aver);
}
