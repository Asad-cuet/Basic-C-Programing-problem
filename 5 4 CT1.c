/*
Question2: Find 2nd digit from last position of a variable

*/

#include<stdio.h>


void main()
{

    int var=1911022;
    int digit_2;

    digit_2=var%100;
    digit_2=digit_2/10;

    printf("Last 2nd digit:%d",digit_2);
}
