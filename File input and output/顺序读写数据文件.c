/**
 * @file 顺序读写数据文件.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include<stdio.h>
#include<Windows.h>
int main() 
{   
	FILE *fp;   
	char str[11];   
	if((fp=fopen("string.txt","rt"))==NULL)  
	{    
		printf("Can not open file strike any key exit!\n");
		system("pause");
	}  
	fgets(str,11,fp);  
	printf("\n%s\n",str);   
	fclose(fp);
	system("pause");
	return 0;
} 
