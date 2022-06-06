/*存入1-10并逆序输出*/
#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for (int i=9; i>=0; i--)  //String a[]的length方法和String a的length（）方法，int a[]没有length
        printf("%d  ",a[i]);
        return 0;
    
}