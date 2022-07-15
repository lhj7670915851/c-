/*求一行字符中有多少个单词*/
#include<stdio.h>
void main()
{
    char str[80];
    int count=0,num=0;
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count =0;
        }
        else if(count==0){         //默认一开始就执行这条语句即num=1
            count=1;
            num++;
            printf("%d",num);
        }
    }
    printf("%d",num);

}