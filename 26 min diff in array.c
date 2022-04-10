#include<stdio.h>

void main()
{
    int arr[]={6,8,21,2,10,12};

    int i,j,min,diff;
    min=arr[0]-arr[1];
    if(min<0) min=min*(-1);


    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            diff=arr[i]-arr[j];
            if(diff<0) diff=diff*(-1);
            if(diff<min) min=diff;
        }
    }

    printf("Min=%d",min);
}
