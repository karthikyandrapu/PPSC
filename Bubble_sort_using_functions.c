#include<stdio.h>
void BubbleSortRecursion(int a[],int num);
main()
{
    int i,j,n,a[20],temp;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    BubbleSortRecursion(a,n);
    printf("The Sorted Array is: \n");
    for(i=1; i<=n; i++)
        printf("%d\n",a[i]);
}
void BubbleSortRecursion(int a[],int n)
{
    int i,j,temp;
    for(j=1; j<=n-1; j++)
    {
        for(i=1; i<=n-j; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
