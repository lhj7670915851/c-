/**
 * @file ����������.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * ������������ͬһ�ڴ��ַ��Ԫ
 * �⣺��ͬһ������������ʦ(����,�ֻ���,�Ա�,ְҵ,ְ��)ѧ��(����,�ֻ���,�Ա�,ְҵ,�༶)��
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
}person[N]={{101,"Liu","Ů","student",.category.class=1},{201,"Wang","��","student",.category.class=2},{101,"Zhang","Ů","teacher",.category.position="��ʦ"}};

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
