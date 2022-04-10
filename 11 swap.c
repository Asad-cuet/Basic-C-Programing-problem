#include<stdio.h>


void main()
{
    int a=10,b=5;
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("a=%d,b=%d",a,b);
}
