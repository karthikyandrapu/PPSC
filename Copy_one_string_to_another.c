int main()
{
    char s[100],cs[100];
    int i;
    printf("enter string\n");
    gets(s);
    i=0;
    while(s[i]!='\0')
    {
        cs[i]=s[i];
        i++;
    }
    cs[i]='\0';
    printf("copied string is\n");
    puts(cs);
}
