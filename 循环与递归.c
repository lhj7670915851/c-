/*【例题1】求1/1-1/3!+1/5!-1/7!+......+(-1)(n-1)(1/(2*n-1)!)
算法设计：math model：Sn=S(n-1)+An,An=A(n-1)*(2*n-2)(2*n-1)*/
#include <stdio.h>
int main(){
    int i, j,sign=1,n=6;
    float An=1,Sn=1;        //Sn和An要定义float型不然结果是0
    for(int i=2;i<=n;i++){
        sign=-sign;
        An=An*(i*2-2)*(i*2-1);
        Sn=Sn+sign/An;
        printf("%.20lf\n",Sn);        
    }
    printf("%.2lf\n",Sn);
}