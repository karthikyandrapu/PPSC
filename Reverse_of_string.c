int main()
{
    char str[10],rstr[10];
    int i,l,j;
    printf("Enter string to be Revesed\n");
    gets(str);
    i=0;
    l=0;
    while(str[i]!='\0')
    {
        i++;
        l++;
    }
    j=0;
    for(i=l-1; i>=0; i--)
    {

        rstr[j]=str[i];
        j++;
    }
    rstr[j]='\0';
    printf("Reversed String is:");
    puts(rstr);
}
