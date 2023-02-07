#include <stdio.h>
struct studentdetails
{
    int roll;
    char name[50];
    char branch[50];
    int year;
};
int main()
{
    struct studentdetails s1;
    printf("Enter Student Details:\n");
    printf("Enter Roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter Name: ");
    scanf("%s",&s1.name);
    printf("Enter Branch: ");
    scanf("%s",&s1.branch);
    printf("Enter Year: ");
    scanf("%d",&s1.year);
    printf("\n\n");
    printf("Details of Student are:\n");
    printf("Roll number: %d\n",s1.roll);
    printf("Name: %s\n",s1.name);
    printf("Branch: %s\n",s1.branch);
    printf("Year: %d\n",s1.year);
}
