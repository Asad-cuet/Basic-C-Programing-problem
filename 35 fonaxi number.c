#include<stdio.h>


main()
{
    int a,b,c,sum,i,n;

    printf("Enter two initial value:");
    scanf("%d %d",&a,&b);
    printf("\nEnter Limit:");
    scanf("%d",&n);

    sum=a+b;
    c=sum;
    printf("%d %d %d",a,b,sum);

    for(i=0;i<=n;i++)
    {
        sum=b+c;
        if(sum>=n) { break; }
        printf(" %d",sum);
        b=c;
        c=sum;

    }
}
