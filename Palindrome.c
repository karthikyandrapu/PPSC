int main()
{
    char str[10];
    int i,l,j;
    printf("Enter String to Check: ");
    gets(str);
    i=0,l=0;
    while(str[i]!='\0')
    {
        i++;
        l++;
    }
    i=0;
    j=l-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
            break;
        i++;
        j--;
    }
    if(i>=j)
        printf("\nPalindrome");
    else
        printf("\nNot a Palindrome");
}
