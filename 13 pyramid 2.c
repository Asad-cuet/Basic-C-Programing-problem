#include<stdio.h>

void main()
{

    int i,j,k;

    for(i=5,k=0;i>0;i--,k++)
    {
        for(j=1;j<=5+k;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else if(j<i) printf(" ");
        }
        printf("\n");
    }
}

