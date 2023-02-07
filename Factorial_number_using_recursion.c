#include <stdio.h>
int factorial(int);
int main()
{
    int n,f;
    printf("Enter a number : ");
    scanf("%d",&n);
    f=factorial(n);
    printf("\nFactorial of %d is %d",n,f);
}
int factorial(int f)
{
    if(f==1)
        return f;
    else
        return f*factorial(f-1);
}
