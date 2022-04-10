#include<stdio.h>

void main()
{
    int i,j,k;

    for(i=5,k=0;i>0;i--,k++)
    {
        for(j=1;j<=5+k;j++)
        {
            if(j<i) printf(" ");
            if(j>=i) printf("*");
        }
        printf("\n");
    }

    for(i=1,k=4;i<=5;i++,k--)
    {
        for(j=1;j<=5+k;j++)
        {
            if(j<i) printf(" ");
            if(j>=i) printf("*");
        }
        printf("\n");
    }





}
