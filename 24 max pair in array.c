#include<stdio.h>

void main()
{
    int arr[]={6,4,2,8,5,2,10,9,3,7,1};
    int i,max=0,pre_max=0;

    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
                pre_max=max;
                max=arr[i];
        }
        if(arr[i]>pre_max && arr[i]!=max)
        {
            pre_max=arr[i];
        }
    }

    printf("Max Pair(%d,%d) and summision=%d",pre_max,max,max+pre_max);
}
