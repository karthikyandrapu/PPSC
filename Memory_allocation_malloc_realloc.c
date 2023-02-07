#include<stdio.h>
int main()
{
    int *ptr,i,n1,n2;
    printf("Enter Size of n1:");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*size of (int));
    printf("Address of Previously Allocated Memory:\n");
    for(i=0,i<n1;i++)
    printf("%d\n"ptr+i);
    printf("\nEnter New Size of n2:");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*size of (int));
    printf("Address of Newly Allocated Memory:\n");
    for(i=0,i<n2;i++)
    printf("%d\n"*(ptr+i));
    free(ptr);
}
