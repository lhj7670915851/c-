/**
 * @file 结构体类型.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-30
 * 
 * @copyright Copyright (c) 2022
 * 一般结构体，共用体和枚举名的首字母要大写。
 */
#include<stdio.h>
int main()
{
    struct Date
{
    int month;
    int year;
    int day;
};
struct Student
{
    char num[11];
    char sex;
    struct Date brith;
    char add[30];
}student1={.sex='女'},student2={'10011','男',{2002,7,4},'hunan shaoyan'};
    printf(" num:%c\n ",student2.num);
    // printf(" num:%s\n sex:%c\n Brithday:%d-%d-%d\n Add:%s\n",
    // student2.num,student2.sex,student2.brith.year,student2.brith.month,student2.brith.day,student2.add);
}