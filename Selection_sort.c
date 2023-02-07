#include <stdio.h>
int main()
{
    int a[20],n,i,j,min,t;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        min=i;
        for(j = i + 1; j < n; j++)
        {
            if(a[min] > a[j])
                min=j;
        }
        if(min != i)
        {
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }
    printf("\nThe Sorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
