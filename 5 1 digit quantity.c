#include<stdio.h>


void main()
{
    int var,cnt=0;
    scanf("%d",&var);

    while(var!=0)
    {

        var=var/10;
        cnt++;
        //printf("var=%d,cnt=%d\n",var,cnt); //testing purpose

    }
    printf("Digit Quantity=%d",cnt);
}
