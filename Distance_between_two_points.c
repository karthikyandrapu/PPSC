#include <stdio.h>
#include <math.h>
int main()
{
	int x1, y1, x2, y2;
	float distance;
printf("Enter x and y coordinates of first point:");
scanf("%d %d",&x1,&y1);
printf("Enter x and y coordinates of second point:");
scanf("%d %d",&x2,&y2);
	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between Two Points: %.4f", sqrt(distance));
	printf("\n");
}
