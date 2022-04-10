#include<stdio.h>


void main()
{
    int n,i,flag=0;
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(i==n){ continue; }
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0) { printf("%d is prime",n); }
    else { printf("%d is not prime",n); }

}
