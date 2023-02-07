#include<stdio.h>
main( )
{
    int a[10][10],r,c,i,j,sum=0;
    printf("Enter order of the square matrix: ") ;
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf ("\nEnter the matrix Elements: \n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                scanf("%d",&a[i][j]);
        }
        for(i=0; i<r; i++)
            sum=sum+a[i][i];
        printf("\nTrace of the matrix = %d",sum);
    }
    else
        printf("Not a square matrix. It is not possible to find trace.");
}
