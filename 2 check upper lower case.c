#include<stdio.h>

main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>'A' && ch<'Z')
    {
        printf("%c is Uppercase",ch);
    }
    if(ch>'a' && ch<'z')
    {
        printf("%c is lowercase",ch);
    }
}
