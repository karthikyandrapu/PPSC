#include <stdio.h>
int main()
{
    int a[10],n,i,min,max;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    min = a[0];
    max = a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }

        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("Minimum element is : %d\n", min);
    printf("Maximum element is : %d\n", max);
}
