#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],r,c,i,j;
    printf("Enter order of Matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter elements of Matrix A:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&b[i][j]);
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            sum[i][j]=a[i][j]+b[i][j];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            printf("%d  ",sum[i][j]);
    printf("\n");
}
