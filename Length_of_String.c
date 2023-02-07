int main()
{
    char s[10];
    int i,l;
    printf("Enter a line of string:");
    gets(s);
    i=0,l=0;
    while(s[i]!='\0')
    {
        i++;
        l++;
    }
    printf("length of the string is: %d",l);
}
