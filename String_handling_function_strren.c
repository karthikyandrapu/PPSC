#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter the string to be reversed");
    gets(str);
    strrev(str);
    printf("revesed string is: ");
    puts(str);
}
