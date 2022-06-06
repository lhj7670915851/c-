/*【例题3】鞍点在矩阵(mtr)中即是一行中最小数又是一列中最大数
算法分析：math model:先求一行中的最小数，在判断是否为一列中的最大数*/
#include <stdio.h>
void readmtr(int a[3][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int printfmtr(int a[3][3],int n){
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
            k++;
            if(k%3==0)  printf("\n");
        }
    }

}
int main(){
    int a[3][3],n=3,lmin,index,flag=0,j,i,k;
    readmtr(a,n);
    printfmtr(a,n);
    for(int i=0;i<n;i++){
        lmin=a[i][0];
        index=0;
        for(int k=0;k<n;k++)    //寻找行中最小的值,输出是j的值就是全局变量的值不会加1
            if(a[i][k]<lmin){
                lmin=a[i][k];
                index=k;
            }
          /*纵坐标不变，寻找列中的最大值*/
        for(j=0;j<n;j++)  {   //符合循环条件执行break全局变量的值等于局部变量的值。不符合循环条件不执行break语句则局部变量+1=全局变量的值
            // printf("aps:j=%d\n",j);     //j既是局部变量(aps)又是全局变量,局部变量返回的值就是全局变量的值
            // printf("i=%d,j=%d\n",i,j);
            // printf("a[i][j]=%d\n",a[i][j]);
            if(a[j][k]>lmin) break;}
            // printf("gal:j=%d\n",j);     //j既是局部变量又是全局变量(gal)                  
            if(j<n) continue;   //即执行了break语句
            printf("%d\n",lmin);
            flag=1;         
    }
    if(flag==0)  printf("No find");
}
