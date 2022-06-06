/*【例题2】28的所有因子为1，2，4，7，14.又28=1+2+4+7+14所以28为完数，求100以内的所有完数
算法设计：math model先求出i/2的所有因子，判断相加和是否为i*/
#include <stdio.h>
int main(){
    int n,a[20];                  //定义数组一定要指明大小
    for(int i=2;i<=1000;i++){
        int k=0,s=1;                    //k,s必须是局部变量
        for(int j=2;j<=i/2;j++)        //这里不用加括号,24不是完数
            if(i%j==0){
                a[k]=j;
                s=s+j;
                k=k+1;
            }
        if(s==i){
            printf("%d:",i);
            for(int b=0;b<k;b++)
                printf("%d,",a[b]);
                printf("\n");
        }

    }
}