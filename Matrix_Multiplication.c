#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],i,j,k,m,n,p,q;
    printf("Enter Row and Column Size of Matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix Elements: \n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter Row and Column Size of Matrix B: ");
    scanf("%d%d",&p,&q);
    printf("Enter the second matrix Elements: \n");
    for(i=0; i<p; i++)
        for(j=0; j<q; j++)
            scanf("%d",&b[i][j]);
    if(n!=p)
    {
        printf("\nMatrix Multplication is Not Possible\n");
    }
    else
    {
        printf("\nMatrix Multplication of Matrix and Matrix B:\n");
        for(i=0; i<m; i++)
            for(j=0; j<q; j++)
            {
                mul[i][j]=0;
                for(k=0; k<p; k++)
                    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        for(i=0; i<m; i++)
            for(j=0; j<q; j++)
                printf("%d\t",mul[i][j]);
        printf("\n");
    }
}
