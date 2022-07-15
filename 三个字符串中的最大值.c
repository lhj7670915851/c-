#include<stdio.h>
#include<string.h>
void main()
{
    char str[3][20];
    for(int i=0;i<3;i++)
    {
        gets(str[i]);
    }
    int i=strcmp(str[0],str[1]);
    if(i<0) strcpy(str[0],str[1]);
    int j=strcmp(str[0],str[2]);
    if(j<0) strcpy(str[0],str[2]);
    printf("%s",str[0]);
}
