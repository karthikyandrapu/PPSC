#include <stdio.h>
main()
{
    int n;
    int i,sum,digit;
    printf("Enter the Number:");
    scanf("%d",&n);
    do
    {
        sum=0;
        while(n|=0)
        {
            digit=n%10;
            sum=sum+digit;
            n=n/10;
        }
        n=sum;
    }
    while (sum>9);
    printf("Lucky Number=%d",sum);
}
