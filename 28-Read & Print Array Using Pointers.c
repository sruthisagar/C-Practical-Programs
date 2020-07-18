//Read and print an array using pointers

#include<stdio.h>

void main()
{
	int n, i;
	printf("Enter the array size\n");
	scanf("%i", &n);
	int a[n];

	printf("Enter the array elements\n");
	for(i=0; i<n; i++)
		scanf("%i", a+i);

	printf("The given array is:\n");
	for(i=0; i<n; i++)
		printf("%i ", *(a+i));
}