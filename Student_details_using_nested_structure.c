#include <stdio.h>
struct studentdetails
{
    int roll;
    char name[50];
    struct marks
    {
        int s1;
        int s2;
        int s3;
    } m;
} s;
int main()
{
    printf("Enter Student Details:\n");
    printf("Enter Roll number: ");
    scanf("%d",&s.roll);
    printf("Enter Name: ");
    scanf("%s",&s.name);
    printf("\n");
    printf("Enter Marks of Student:\n");
    printf("Enter Marks of PPSC: ");
    scanf("%d",&s.m.s1);
    printf("Enter Marks of CFDL: ");
    scanf("%d",&s.m.s2);
    printf("Enter Marks of MATHS: ");
    scanf("%d",&s.m.s3);
    printf("\n\n");
    printf("Details of Student are:\n");
    printf("Roll number: %d\n",s.roll);
    printf("Name: %s\n",s.name);
    printf("\n");
    printf("Marks of Student are:\n");
    printf("PPSC: %d\n",s.m.s1);
    printf("CFDL: %d\n",s.m.s2);
    printf("MATHS: %d\n",s.m.s3);
}
