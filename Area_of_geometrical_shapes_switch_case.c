#include<stdio.h>
main()
{
    int choice,r,a,l,w,h,b;
    float area;
    printf("Press 1.For Area of Circle\n");
    printf("Press 2.For Area of Square\n");
    printf("Press 3.For Area of Rectangle\n");
    printf("Press 4.For Area of Triangle\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter Radius of Circle:\t");
        scanf("%d",&r);
        area=3.14*r*r;
        break;
    case 2:
        printf("Enter Side of Sqaure:\t");
        scanf("%d",&a);
        area=a*a;
        break;
    case 3:
        printf("Enter Length & width of Rectangle:\t");
        scanf("%d%d",&l,&w);
        area=l*w;
        break;
    case 4:
        printf("Enter Height & Base of Triangle:\t");
        scanf("%d%d",&h,&b);
        area=0.5*h*b;
        break;
    }
    printf("Area is %.4f",area);
}
