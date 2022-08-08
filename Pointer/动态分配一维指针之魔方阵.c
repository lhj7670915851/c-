#include<stdio.h>
#include<stdlib.h>

int array(int n)
{
    int i, j, no, num, max;
    int *mtrx;
    if(n%2 == 0)  
        n=n+1;
    max=n*n;
    mtrx=(int *)malloc(max+max);  
    mtrx[n/2]=1;  
    i=0;  
    j=n/2;  
    for(num=2; num<=max; num++)
    {
        i=i-1;
        j=j+1;
        if((num-1)%n == 0)  
        {
            i=i+2;
            j=j-1;
        }
        if(i<0) 
            i=n-1;
        if(j>n-1) 
            j=0;
        no=i*n+j; 
        mtrx[no]=num;
    }
    no=0;
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%3d", mtrx[no]);
            no++;
        }
    }
    printf("\n");
    free(mtrx);
    return 0;
}

int main()
{
    int n=3;
    array(n); 
    return 0;
}