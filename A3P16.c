#include<stdio.h>
int main()
{
    char c;
    //WE CAN ALTERNATIVELY USE int BY USING "ASCII" CODE OF THE CHARACTERS.
    printf("enter a character:\n");
    scanf("%c", &c);
    if(c>='a'&& c<='z')
    printf("lowercase");
    else if(c>='A'&& c<='Z')
    printf("UPPERCASE");
    else if(c>='0' && c<='9')
    printf("Digit");
    else
    printf("Special character");
    return 0;
}