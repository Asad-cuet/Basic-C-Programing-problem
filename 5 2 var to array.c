#include<stdio.h>

void main()
{
    int var=1234567891,cnt=0;
    int t=var;
    while(t!=0)
    {
        t=t/10;
        cnt++;
                    //  printf("t=%d\n",t);
    }
    printf("Total Digit=%d\n",cnt);


    int arr[cnt],i;
    for(i=cnt-1;i>=0;i--)
    {
        arr[i]=var%10;
                           // printf("Pushing into array:%d\t",var%10);
        var=var/10;
                       // printf("var=%d\n",var);
    }


    printf("Array=");
    for(i=0;i<cnt;i++)
    {
        printf("%d,",arr[i]);
    }

}
