/**
 * @file 随机读写数据文件.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    struct Student{
        char name [10];
        int num;
        int age;
        char addr [30];
    } stud [5];
 
    FILE * input = fopen("D:\\stud.dat","rb");
 
    if(input == NULL){
        printf("无法打开文件");
        exit(0);
    }
 
    int validCount;//实际读取多少数据项
    while((validCount = fread(stud,sizeof(struct Student),5/*最多读取5个数据项*/,input))!=0){
        for(int i=0;i<validCount;++i){
            printf("%s %d %d %s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
        }
    }
 
    rewind(input);//将文件位置标记重新指向文件开头,否则因文件位置标记经过上面循环执行指向文件末尾而无法将已有文件中的数据复制到新文件中。
 
    FILE * output = fopen("F:\\stud.dat","wb");
 
    if(output == NULL){
        printf("无法打开文件");
        exit(0);
    }
 
    while((validCount = fread(stud,sizeof(struct Student),5/*最多读取5个数据项*/,input))!=0){
        fwrite(stud,sizeof(struct Student),validCount,output);
    }
    fclose(output);
    fclose(input);
    return 0;
}