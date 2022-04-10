//Remove odd num from array by replacing your id digit serially

#include<stdio.h>


void main()
{

    int arr[]={2,4,5,3,8,7,3,2,0,5,8,1,9,0},n=14; //n is length
    int id[]={1,9,1,1,0,2,2};
    int i,cnt=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            arr[i]=id[cnt];
            cnt++;
        }
    }


    printf("Replaced Array:");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }

}



