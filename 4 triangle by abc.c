#include<stdio.h>


void main()
{
    int i,j;

    for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'E'-i+j);
        }
        printf("\n");
    }
}
