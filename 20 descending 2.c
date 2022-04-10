
#include<stdio.h>
main()
{
    int i,j,temp,n;
    printf("n=");
    scanf("%d",&n);
    int ara[n];
    printf("Array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }



    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(ara[j]<ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }



    printf("After Descending:\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",ara[i]);
    }
}

