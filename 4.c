//Arithmetic expression

#include<stdio.h>
void main()
{
	float a,b,c,d,e,f,g,value;
	printf("Enter the values of a, b, c, d, e, f and g\n");
	scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
	value=((a-b/c*d+e)*(f+g));
	printf("The value of ((a-b/c*d+e)*(f+g)) is %.2f \n",value);
}
