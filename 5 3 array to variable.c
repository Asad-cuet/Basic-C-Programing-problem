#include<stdio.h>

void main()
{
    int arr[]={1,2,3,4,5};
    int i,var=0;

    for(i=0;i<5;i++)
    {
        var=var*10+arr[i];
    }

    printf("Var=%d",var);
}
