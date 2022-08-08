/**
 * @file 指针和动态内存-内存泄漏.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright copyright (c) 2022
 * 内存泄漏指的是栈溢出
 * 三人随机洗牌游戏
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet)
{
    // char *c[3]=(char*)malloc(4*sizeof(char));
    // c[0]='J',c[1]='Q',c[2]='K';      //每洗一次牌都会消耗内存
    char c[3]={'J','Q','K'};    //不能用双引号,内存不变
    printf("Shuffling.........\n");
    srand(time(NULL));
    int i;
    for(i=0;i<5;i++)
    {
        int x=rand()%3;
        int y=rand()%3;
        int temp =c[x];
        c[x]=c[y];
        c[y]=temp;
    }
    int playersGuess;
    printf("What's the position of queen ----- 1,2 or 3?");
    scanf("%d",&playersGuess);
    if(c[playersGuess-1]=='Q')
    {
        cash+=3*bet;
        printf("You Win! Result = %c%c%c Total cash=%d\n",c[0],c[1],c[2],cash);
    }
    else
    {
        cash-=2*bet;
        printf("You Loose! Result = %c%c%c Total cash=%d\n",c[0],c[1],c[2],cash);
    }
    // free(*c[3]);
}
int main()
{
    int bet;
    printf("Welcome to the Virtual casino\n");
    printf("Total cash=$%d\n",cash);
    while(cash>0)
    {
        printf("What's your bet?");
        scanf("%d",&bet);
        if(bet<=0 || bet>cash)  break;
        Play(bet);
    }
}