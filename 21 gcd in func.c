#include<stdio.h>

int find_gcd(int a,int b)
{
    int min,i,gcd;
    if(a<b) { min=a; } else { min=b; }
    for(i=min;i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}


int main()
{
    int gcd,a,b;

    printf("Enter two value:");
    scanf("%d %d",&a,&b);

    gcd=find_gcd(a,b);
    printf("GCD=%d",gcd);

    return 0;
}
