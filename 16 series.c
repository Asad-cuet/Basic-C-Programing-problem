#include<stdio.h>


int fact(int n);

void main()
{
    int i,n,c;
    float sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=fact(i);
        sum=sum+(i*i/c);
        printf("%d/%d+",i*i,c);
    }
    printf("\nSum=%.2f",sum);
}

int fact(int n)
{
    int fact=1,i;
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
