/**
 * @file 指针和字符数组.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<string.h>
// const来修饰就是意味着“只读”
void print(const char C[])
{
    // C[0]='A';//报错！！！
    int i=0;
    while(C[i]!='\0')
    {
        printf("%c",C[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char C[]="JOHN";   /*这样声明必须在同一行={'J','O','H','N','\0'}*/
    // char C[20];
    // C[0]='A';
    // C[1]='O';
    // C[2]='H';
    // C[3]='N';
    // C[4]='\0';
    int len =strlen(C);
    int n=sizeof(C);
    printf("%s\n",C); //数组大小至少定义为5否则溢出
    printf("Length=%d\n",len);      //不计算最后的null个数
    printf("sizeof=%d\n",n);
    /*打印字符数组*/
    print(C);
}