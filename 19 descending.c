#include<stdio.h>

void main()
{
    int arr[]={15,12,6,3,5,8,3,4,5,3};
    int i,j,temp;

    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    for(i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
}

