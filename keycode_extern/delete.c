//内部函数只能被本文件调用在函数面前用static声明，即static void delete(char str[],char ch){}，函数定义时默认为外部函数exter可以省略不写
extern void delete(char str[],char ch)
{
    int i,j;
    for(i=j=0;str[i]!='\0';i++)
        if(str[i]!=ch)  str[j++]=str[i];
        str[j]='\0';
}