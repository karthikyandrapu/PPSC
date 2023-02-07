#include<stdio.h>
#include<string.h>
int main() {
    char str[10],rstr[10]; 
    printf("enter string to check palindrome");
    gets(str);
    strcpy(rstr,str);
    if(strcmp(str,strrev(rstr))==0)
        printf("palindrome");
    else
        printf("not palindrome");
}
