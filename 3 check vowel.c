#include<stdio.h>

void main()
{
    char ch,vowel[]={'A','a','E','e','I','i','O','o','U','u'};
    int i,flag=0;

    scanf("%c",&ch);

    for(i=0;i<10;i++)
    {
            if(ch==vowel[i])
            {
                flag=1;
                break;
            }

    }

    if(flag==1)
    {
        printf("%c is Vowel",ch);
    }
    else
    {
        printf("%c is not Vowel",ch);
    }


}
