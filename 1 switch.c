#include<stdio.h>

void main()
{
    int i;
    scanf("%d",&i);

    switch(i)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    default:
        printf("Not Found");
        break;
    }
}
