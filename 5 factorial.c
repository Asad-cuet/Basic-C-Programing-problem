
#include<stdio.h>


void main()
{
    int i,n,fact=1;
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("\nFactorial=%d",fact);
}
