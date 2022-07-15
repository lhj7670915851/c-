//快捷键shift+Enter
/**
 * @file 警察抓小偷.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * a:我不是小偷（x!=1）
 * b:c是小偷(x=3)
 * c:小偷肯定是d(x=4)
 * d:c在冤枉人(x!=4)
 */
#include<stdio.h>
int main()
{
    int x;
    for(int x=1;x<=4;x++)
    {
        if((x!=1)+(x==3)+(x==4)+(x!=4)==3)    
            printf("%c",(x+96));    //自动转换为c的ASCII码值，‘0’<<48,0<<0,a<<97,A<<65
            // printf("%d",x);
    }
    return 0;
}