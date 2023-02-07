#include <stdio.h>
main()
{
    int a[100],even[100],odd[100], i,j=0,k=0, num;
    printf("Enter size of an array:");
    scanf("%d",&num);
    printf("Enter array elements:\n");
    for(i=0; i<num; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for (i = 0; i < num; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    printf("Even numbers in the array are:");
    for (i = 0; i<j; i++)
        printf("%d \t", even[i]);
    printf("\n");
    printf("\n Odd numbers in the array are:");
    for (i = 0; i<k; i++)
        printf("%d \t", odd[i]);
}
