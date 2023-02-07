#include<stdio.h>
void swap(int,int);
int main( )
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("The Values before swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    swap(a,b);
}
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("The Values after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
