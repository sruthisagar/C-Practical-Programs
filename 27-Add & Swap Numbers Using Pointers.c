//Add and swap two numbers using pointers

#include<stdio.h>

void swap(int *a, int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

void main()
{
	int n1, n2, *a, *b, sum;
	printf("Enter two numbers\n");
	scanf(" %i %i", &n1, &n2);
	a=&n1;
	b=&n2;
	sum=*a+*b;
	printf("Sum of %i and %i is %i \n", *a, *b, sum );
	printf("Before swapping: n1=%i and n2=%i \n", *a, *b);
	swap(a,b);
	printf("After swapping: n1=%i and n2=%i \n", *a, *b);

}