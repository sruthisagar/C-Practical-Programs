//Sum of elements of an array using pointers

#include <stdio.h>

int add(int *a, int n)
{
	int sum=0, i;
	for(i=0; i<n; i++)
		sum+=*(a+i);
	return sum;
}

void main()
{
	int n, i, sum;
	printf("Enter the array size\n");
	scanf("%i", &n);
	int a[n];
	
	printf("Enter the array elements\n");
	for(i=0; i<n; i++)
		scanf("%i", a+i);

	printf("The given array is:\n");
	for(i=0; i<n; i++)
		printf("%i ", *(a+i));

	sum=add(a, n);
	printf("\nSum of elements of the given array is %i\n", sum);
}