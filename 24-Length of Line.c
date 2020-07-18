// Length of a line using coordinates#include<stdio.h>

#include<stdio.h>
#include<math.h>

struct Point
{
	float x, y;
};

void main()
{
	float length;
	struct Point A,B;
	printf("Enter coordinates of end point A (x,y)\n");
	scanf("%f%f",&A.x, &A.y);
	printf("Enter coordinates of end point B (x,y)\n");
	scanf("%f%f",&B.x, &B.y);
	length=sqrt((pow((A.x-B.x),2)+pow((A.y-B.y),2)));
	printf("Length of line AB = %.2f units\n", length);
}