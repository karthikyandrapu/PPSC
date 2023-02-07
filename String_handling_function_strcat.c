#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter two strings for concatenation");
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    printf("the string after concatenation is: ");
    puts(str1);
}
