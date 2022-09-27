/**
 * @file 随机读写数据文件.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * fopen(文件名,打开方式)。fclose(文件指针)
 * 
 */
#include<stdio.h>
int main()
{
    int *fp;
    if(fp=fopen("file","r")==NULL)
    {
        printf("cannot open this file\n");
        exit(0);
    }
}