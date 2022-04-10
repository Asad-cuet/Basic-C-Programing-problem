#include<stdio.h>

void main()
{
    int i,pre_val,pre_sum,sum;
    int a=0,b=1;
    sum=a+b;
    printf("%d %d %d ",a,b,sum);

    pre_val=b;
    pre_sum=sum;

    for(i=0;i<100;i++)
    {
        sum=pre_val+pre_sum;
        if(sum>100) break;
        printf("%d ",sum);
        pre_val=pre_sum;
        pre_sum=sum;


    }

}
