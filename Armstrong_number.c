#include<stdio.h>
int main()
{
    int num, n, d,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(num==sum)
        printf("Given Number is an Armstrong");
    else
        printf("Given Number is not an Armstrong");
}
