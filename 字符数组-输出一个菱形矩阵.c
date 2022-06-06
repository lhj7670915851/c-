/*    *
     *  *
    *     *
      *  *
        *
*/
#include<stdio.h>
int main()
{
    char a[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%5c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}