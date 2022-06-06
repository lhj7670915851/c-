/*【例题4】编写算法打印出下面规律的图形 1 (1,1)
                                      5 (2,1)    2(2,2)
                                      8 (3,1)    6(3,2)   3(3,3)
                                      10(4,1)    9(4,2)   7(4,3)   4(4,4)
算法分析： 
*/
#include <stdio.h>
int main(){
    int k,a[10][10];
    k=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<5-i;j++){
            a[i-1+j][j]=k;
            printf("%d\n",k);
            k++;
        }
        
    }
    // printf("%d",k);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d\t",a[i][j]);
            printf("\n");
        }
    }

}