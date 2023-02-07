#include<stdio.h>
void swap(int *,int *);
int main( )
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping");
    printf("a=%d",a);
    printf("b=%d",b);
    swap(&a,&b);
    printf("\nAfter swapping");
    printf("a=%d",a);
    printf("b=%d",b);
}

void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
