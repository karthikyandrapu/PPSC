#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Prime Numbers are:");
    for(i=1; i<n; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("\t%d",i);
    }
}
