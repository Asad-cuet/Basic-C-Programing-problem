#include<stdio.h>


void main()
{
    int arr[]={1,2,3,13,5,6,23,8,9};

    int i,j,max=0;

    for(i=0;i<9;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Max=%d",max);
}
