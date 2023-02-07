#include <stdio.h>
int fib(int);
int main()
{
    int nterms,i,f;
    printf("Enter n terms: ");
    scanf("%d",&nterms);
    printf("\nFibonacci of %d terms: ",nterms);
    for(i=0; i<nterms; i++)
    {
        f=fib(i);
        printf("%d\t",f);
    }
}
int fib(int n)
{
    if(n==0||n==1)
        return n;
    else
        return (fib(n-1)+fib(n-2));
}
