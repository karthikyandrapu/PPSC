#include <stdio.h>
int main()
{
    int n, reverse=0,count=0,remainder;
    printf("Enter an number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        remainder=n%10;
        n/=10;
        reverse=reverse*10+remainder;
        count++;
    }
    printf("Reversed Number = %d\n",reverse);
    printf("Number of digits = %d\n",count);
}
