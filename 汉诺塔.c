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
    Hanio(3,'A','B','C');
    return 0;
}
