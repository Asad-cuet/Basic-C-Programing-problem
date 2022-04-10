/*
One of the most useful data types supplied in the C++ libraries is the string. A string is a
variable that stores a sequence of letters or other characters, such as "Hello" or
"May 10th is my birthday!". Just like the other data types, to create a string we
first declare it, then we can store a value in it.  */

#include<stdio.h>
#include<string.h>
int main()
{
    char user_str[20];

    int i,flag=0,length,n;

    printf("Enter a Word=");
    scanf("%s",&user_str);

    length=strlen(user_str);
    n=length;
    for(i=0;i<n;i++)
    {
        if(user_str[i]!=user_str[--length])
        {
            flag=1;
            break;
        }

    }

    if(flag==0)
    {
        printf("\nThe word %s is palindrome",user_str);
    }
    else
    {
        printf("\nThe word %s is not palindrome",user_str);
    }
    return 0;
}

