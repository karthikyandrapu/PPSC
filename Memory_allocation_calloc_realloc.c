#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int *ptr,i,n1,n2;
    printf("Enter Size of n1:");
    scanf("%d",&n1);
    ptr=(int*)calloc(n1,sizeof(int));
    if(ptr=NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory Sucessful allocated using calloc:\n");
        for(i=0; i<n1; i++)
            ptr[i]=i+1;
    }
    printf("The elements are:");
    for(i=0; i<n1; i++)
        printf("%d\n",ptr[i]);
    printf("Enter Size of n2:");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*sizeof(int));
        printf("Memory Sucessful allocated using realloc:\n");
    for(i=n1; i<n2; i++)
        ptr[i]=i+1;
    printf("The elements are:");
    for(i=0; i<n2; i++)
        printf("%d\n",ptr[i]);
    free(ptr);
}
