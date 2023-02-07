#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="program", str2[20];
	int l1,l2,l3;
	printf("enter string to find length: ");
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	l3=strlen("ppsc");
	printf("l1=%d\tl2=%d\tl3=%d",l1,l2,l3);
}
