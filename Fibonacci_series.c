#include <stdio.h>
int main()
{
    int n1,n2,nterms,i,nn;
    n1 = 0, n2 = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &nterms);
    printf("Fibonacci Series:%d\t%d\t", n1,n2);
    for (i = 1; i <= nterms-2; ++i)
    {
        nn= n1 + n2;
        printf("%d\t", nn);
        n1 = n2;
        n2 = nn;
    }
}
