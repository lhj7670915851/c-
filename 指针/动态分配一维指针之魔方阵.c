#include<stdio.h>
#include<stdlib.h>

int array(int n)
{
    int i, j, no, num, max;
    int *mtrx;
    if(n%2 == 0)  /*n��ż�������1ʹ���Ϊ����*/
    {
        n=n+1;
    }
    max=n*n;
    mtrx=(int *)malloc(max+max);  /*Ϊħ��������ڴ�*/
    mtrx[n/2]=1;  /* ��1��������*/
    i=0;  /*��Ȼ��1������*/
    j=n/2;  /*��Ȼ��1������*/
    /*��2��ʼȷ��ÿ�����Ĵ��λ��*/
    for(num=2; num<=max; num++)
    {
        i=i-1;
        j=j+1;
        if((num-1)%n == 0)  /*��ǰ����n�ı���*/
        {
            i=i+2;
            j=j-1;
        }
        if(i<0)  /*��ǰ���ڵ�0��*/
        {
            i=n-1;
        }
        if(j>n-1)  /*��ǰ�������һ�У���n-1��*/
        {
            j=0;
        }
        no=i*n+j;  /*�ҵ���ǰ���������еĴ��λ��*/
        mtrx[no]=num;
    }
    /*��ӡ���ɵ�ħ����*/
    printf("���ɵ�%d-ħ����Ϊ:",n);
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
    int n;
    printf("������nֵ:\n");
    scanf("%d", &n);
    array(n);  /*����array����*/
    return 0;
}