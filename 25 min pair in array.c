#include<stdio.h>

void main()
{
    int arr[]={11,9,8,7,5,6};
    int i,min=arr[0],pre_min;

    for(i=0;i<6;i++)
    {
        if(arr[i]<min)
        {
            pre_min=min;
            min=arr[i];
        }
        if(arr[i]<pre_min && arr[i]!=min)
        {
            pre_min=arr[i];
        }

    }
    printf("Min Pair(%d,%d) and sum=%d",min,pre_min,min+pre_min);

}
