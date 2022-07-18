#include<stdio.h>
#include<string.h>
void main()
{
    //  不能写成char str[10]=gets(str);不能同时输入输出多个值
    // char str[10];   
    // gets(str);
    // printf("%s\n",str);
    // puts(str);

    // char a[7]="China! ";
    char b[10]="Chinese!";
    printf("sizeof(b)=%d\n",sizeof(b));     //输出变量b所占的字节数
    // printf("b=%s\n",b);

    //  strlen-字符串长度函数,遇到\0停止输出字符串长度(刚好8个字符数组定义长至少为9因为还有\0)
    //，sizeof读取到的是整个地址空间的长度
    printf("strlen(b)=%d\n",strlen(b));

    // //  strlwr-字符串转化小写函数
    // printf("strlwr(b)=%s\n",strlwr(b));

    // //  strupr-字符串转换大写函数
    // printf("strupr(b)=%s\n",strupr(b));

    // //   strcpm-字符串比较函数a>b结果>0;a=b结果=0;a<b结果<0;
    // int c=strcmp(a,b);
    // printf("strcmp(a,b)=%d\n",c);

    // //   strcat(a,b)-字符串连接符,去掉a的'\0'将b接在a的后面
    // printf("strcat(a,b)=");
    // puts(strcat(a,b));

    // //(有争议的函数，使用这个函数时字符串地址大小一定要固定)     
    // // strcpy,strncpy-字符串复制函数,a复制到b返回a指针指向的值(不能用a=b语句给字符串赋值)
    // printf("strcpy(b,a)=");
    // puts(strcpy(b,a));
    // printf("strncpy(b,a)=");
    // puts(strncpy(b,a,4));

    
}