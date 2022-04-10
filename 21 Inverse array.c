#include<stdio.h>

void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i,temp,j;
    int n=9; // array length

    for(i=0,j=n-1;i<n/2;i++,j--)
    {

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

    }


    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }

}
