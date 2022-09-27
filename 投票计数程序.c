/**
 * @file 投票计数程序.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 有三个候选人,10个选民每个选民只能投一票,输入被选人的名字,最后输出每个候选人的得票结果
 */
#include<stdio.h>
#include<string.h>
#define N 4
struct VoteCounting
{
    char name[20];
    int count;
} person[3] = {{"Li",0},{"Wang",0},{"Liu",0}};
int main()
{
    char Vote[20];
    for(int j=0 ; j<N ;j++)
    {
        scanf("%s",Vote);
    for(int i=0 ; i<3 ; i++)
        if(strcmp(person[i].name,Vote)==0)
            person[i].count++;
    }
    printf("Li votes=%d\nWang votes=%d\nLiu votes=%d\n", person[0].count, person[1].count, person[2].count);
    return 0;
}
    
