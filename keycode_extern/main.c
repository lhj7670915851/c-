/*现有一个字符串里面有若干字符，现输入一个字符，要求把字符串中该字符全部删去*/
#include<stdio.h>
#include "delete.c"
#include "enter_string.c"
#include "print_string.c"
int main()
{
    extern void enter_string(char str[]);
    extern void delete(char str[],char ch);
    extern void print_string(char str[]);
    char c,str[80];
    enter_string(str);
    scanf("%c",&c);
    delete(str,c);
    print_string(str);
    return 0;
}
