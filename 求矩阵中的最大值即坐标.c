#include<stdio.h>
int main()
{
    int a[2][2]={{3,5},{34,12}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++) 
        {   
            int temp;
            if(a[i][j]>a[i][j+1])
            {
                temp=a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j+1]=temp;
            }

        }
    }
}