/**
 * @file 结构体类型.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-30
 * 
 * @copyright Copyright (c) 2022
 * 一般结构体，共用体和枚举名的首字母要大写。
 * 结构体指针的强制类型转换struct Student {int num} *p,stu[3];
 * p=(struct Student*)stu[0].num;   //此时p是stu[0]的num的首地址,
 * 但是p任然保持struct Student类型P++仍然是增加student Student长度的大小
 */
#include<stdio.h>
int main()
{
struct Date
{
    int year;
    int month;
    int day;
};
struct Student
{
    char num[11];
    char sex[4];    //不能写成char sex
    struct Date brith;
    char add[30];
}student1={.sex="女"} , student2={"10011","男",{2002,7,4},"HunanShaoyan"};
/** warning: character constant too long for its type 这个错误是因为在printf内使用了单引号' '导致的。将其更改为双引号 " " 即可解决。*/
    printf(" num:%s\n ",student2.num);
    printf(" num:%s\n sex:%s\n Brithday:%d-%d-%d\n Add:%s\n",student2.num,student2.sex,student2.brith.year,student2.brith.month,student2.brith.day,student2.add);    
}