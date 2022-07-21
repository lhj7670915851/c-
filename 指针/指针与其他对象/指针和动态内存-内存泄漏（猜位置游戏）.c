/**
 * @file 指针和动态内存-内存泄漏.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-21
 * 
 * @copyright Copyright (c) 2022
 * 内存泄漏指的是栈溢出
 * 三人随机洗牌游戏
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet)
{
    char *C[3]=(char*)malloc(4*sizeof(char));
    C[0]='J',C[1]='Q',C[2]='K';
    // char C[3]={'J','Q','K'};    //不能用双引号
    printf("Shuffling.........\n");
    srand(time(NULL));
    int i;
    for(i=0;i<5;i++)
    {
        int x=rand()%3;
        int y=rand()%3;
        int temp =C[x];
        C[x]=C[y];
        C[y]=temp;
    }
    int playersGuess;
    printf("What's the position of queen ----- 1,2 or 3?");
    scanf("%d",&playersGuess);
    if(C[playersGuess-1]=='Q')
    {
        cash+=3*bet;
        printf("You Win! Result = %c%c%c Total Cash=%d\n",C[0],C[1],C[2],cash);
    }
    else
    {
        cash-=bet;
        printf("You Loose! Result = %c%c%c Total Cash=%d\n",C[0],C[1],C[2],cash);
    }
}
int main()
{
    int bet;
    printf("Welcome to the Virtual Casino\n");
    printf("Total cash=$%d\n",cash);
    while(cash>0)
    {
        printf("What's your bet?");
        scanf("%d",&bet);
        if(bet<=0 || bet>cash)  break;
        Play(bet);
    }
}