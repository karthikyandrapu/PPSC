#include<stdio.h>
#include<string.h>
int main()
{
    char src[10],dest[10];
    printf("enter source string to copy");
    gets(src);
    strcpy(dest,src);
    printf("the copied string is: ");
    puts(dest);
}
