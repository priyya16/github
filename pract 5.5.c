#include<stdio.h>
#include<ctype.h>
// write a program to input a character using getchar()
// print the character using putchar()
int main()
{
   char ch;
    printf("Enter a character :");
    ch=getchar();

    printf("You entered :");
    putchar(ch);

    if(isalnum(ch))
    {
        printf("\n Character is alphanumeric :");
    }
    if(isalpha(ch))
    {
        printf("\n Character is alphabate :");
    }
    if(islower(ch))
    {
        printf("\n Character is lowercase :");
        printf("\n Uppercase conversion :%c",toupper(ch));

    }
    if(isupper(ch))
    {
        printf("\n Character is uppercase :");
        printf("\n Lowercase conversion :%c",tolower(ch));

    }
    if(isdigit(ch))
    {
        printf("\n Character is digit :");
    }
    if(isprint(ch))
    {
        printf("\n Character is printable :");
    }
    if(ispunct(ch))
    {
        printf("\n Character is punctuation symbol :");
    }
    if(isspace(ch))
    {
        printf("\n Character is white space :");
    }
    printf("\n\nDone by 23TCEMBF Prince Vagadiya");

}

