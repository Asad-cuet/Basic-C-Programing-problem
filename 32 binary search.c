#include<stdio.h>
int main()
{
    int number,low_index=0,high_index=9,mid_index,i;
    int ara[10]={4,12,15,23,29,45,67,74,81,89};
    printf("Array=");
    for(i=0;i<10;i++) printf("%d,",ara[i]);
    printf("\nEnter a number to search:");
    scanf("%d",&number);
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(number==ara[mid_index])
        {
            break;
        }
        if(number<ara[mid_index])
        {
            high_index=mid_index-1;
        }
        else
        {
            low_index=mid_index+1;
        }
    }

    if(low_index>high_index)
    {
        printf("%d is not in the Array",number);
    }
    else
    {
        printf("%d is in the Array.It's location is %d",number,mid_index);
    }

    return 0;
}

