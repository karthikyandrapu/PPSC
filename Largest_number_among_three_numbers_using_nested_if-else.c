#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter Three Numbers a,b,c :");
    scanf("%d%d%d", &a,&b,&c);
    printf("\nLargest out of Three Numbers is :");
    if(a>b)
    {
        if(a>c)
            printf("a=%d\n",a);
        else
            printf("c=%d\n",c);
    }
    else
    {
        if(b>c)
            printf("b=%d\n",b);
        else
            printf("c=%d\n",c);
    }
}
