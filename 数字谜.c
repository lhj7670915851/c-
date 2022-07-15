/**
 * @file 数字谜.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * ABCAB/A=DDDDDD(A取3~9，D取1~9共循环7*9=63次)
 * 设E/A=F（%是留下几位，/是去除几位）
 */
#include<stdio.h>
int main()
{
    int A,B,C,D,E,F;
    for(A=3;A<=9;A++)
    {
        for(D=1;D<=9;D++)
        {
            E=D*100000+D*10000+D*1000+D*100+D*10+D;
            if(E%A==0)
            {
                
                F=E/A;
                if(F/10000==A && (F%100)/10==A && (F%10000)/1000==F%10)
// if(F/10000==(F%100)/10==A && (F%10000)/1000==F%10=B)  //不能用三个连等符号B，C的值都不知道故不能写等于B
                    printf("%d * %d = %d\n",F,A,E);       
            }
        }     
    }
    return 0;
}