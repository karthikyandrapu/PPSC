#include <stdio.h>
int main()
{
    int a[20],i,n,search;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (i=0; i<n; i++)
    {
        if (a[i] == search)
        {
            printf("Searched Element %d is present at %d index position",search,i);
            break;
        }
    }
    if (i >= n)
        printf("Searched Element %d is not found");
}
