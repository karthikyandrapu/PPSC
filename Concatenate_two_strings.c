int main()
{
    char F1[10],F2[10];
    int i,j;
    printf("enter first name");
    gets(F1);
    printf("enter last name");
    gets(F2);
    i=0;
    while(F1[i]!='\0')
    {
        i++;
        j=0;
    }
    while(F2[j]!='\0')
    {
        F1[i]=F2[j];
        i++;
        j++;
    }
    F1[i]='\0';
    printf("Concatenated string is: ");
    puts(F1);
}
