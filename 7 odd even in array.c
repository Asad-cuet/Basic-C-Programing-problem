#include<stdio.h>

void main()
{
    int i,n,e_cnt=0,o_cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e_cnt++;
        }
        else
        {
            o_cnt++;
        }
    }
    printf("Even=%d,Odd=%d",e_cnt,o_cnt);
}
