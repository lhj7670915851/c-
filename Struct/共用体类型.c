/**
 * @file 共用体类型.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 将许多变量放在同一内存地址单元
 * 题：用同一个表格来处理教师(姓名,手机号,性别,职业,职务)学生(姓名,手机号,性别,职业,班级)表
 */
#include<stdio.h>
#define N 3
struct
{
    int num;
    char name[20];
    char sex[2];
    char job[8];
    union
    {
        int class;
        char position[10];
    }category;
}person[N]={{101,"Liu","女","student",.category.class=1},{201,"Wang","男","student",.category.class=2},{101,"Zhang","女","teacher",.category.position="讲师"}};

int main()
{
    int i;
    // printf("%s",person[2].job);
    for(i=0 ; i<N ; i++)
    {
        if(person[i].job=="teacher") 
            printf("%d-%s-%s-%s-%s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
        else
            printf("%d-%s-%s-%s-%d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.class);
    }
    return 0;
}
