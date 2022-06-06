#include <stdio.h>
#include <math.h>
void main(){
    int m=9;  // 输入的整数 
    int i;  // 循环次数
    int k;  // m 的平方根 
    // 求平方根，注意sqrt()的参数为 double 类型，这里要强制转换m的类型 
    k=(int)sqrt( (double)m );
    printf("%d",k);
    for(i=2;i<=k;i++)   //符合循环条件执行break全局变量的值等于局部变量的值。不符合循环条件不执行break语句则局部变量+1=全局变量的值
    {printf("%d\n",i);     
       if(m%i==0)
            break;}

    printf("%d\n",i);
    // 如果完成所有循环，那么m为素数
    // 注意最后一次循环，会执行i++，此时 i=k+1，所以有i>k 
    if(i>k)
        printf("%dYes\n",m);
    else
        printf("%dNO\n",m);


}