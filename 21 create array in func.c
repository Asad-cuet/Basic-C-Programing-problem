#include<stdio.h>
int fun()
{
    int arr[]={10,2};




    return arr;
}

int main()
{
    int *ptr = fun();
    printf("%d %d", ptr[0], ptr[1]);
    return 0;
}
