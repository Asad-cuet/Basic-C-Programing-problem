//Q. Exchange value of two array using user-defined function and pointer


#include<stdio.h>

void swap_arr(int *a,int *b,int n);

void main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};

    swap_arr(arr1,arr2,5);


    int i;

    printf("arr1:");
    for(i=0;i<5;i++)
    {
        printf("%d,",arr1[i]);
    }

    printf("\narr2:");
    for(i=0;i<5;i++)
    {
        printf("%d,",arr2[i]);
    }
}

void swap_arr(int *a,int *b,int n)
{
    int i,temp;

    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
