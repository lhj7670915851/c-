// 以B为支架将所有盘子从A移到C盘
#include<stdio.h>
void Hanio (int n,char A,char B,char C){
    if(n==1)
        printf("%c->%c\n",A,C);
    else{
        Hanio(n-1,A,C,B);
        printf("%c->%c\n",A,C);
        Hanio(n-1,B,A,C);
    }
}
int main(){
    Hanio(2,'A','B','C');
    return 0;
}
