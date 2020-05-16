//Factorial - recursive and non recursive fn.

#include<stdio.h>

int recursive_factorial(int n)
{
	int result;
	if(n==0)
		result=1;
	else
		result=n*recursive_factorial(n-1);
	return result;
}

int factorial(int n)
{
	int result=1;
	for(int i=1;i<=n;i++)
		result*=i;
	return result;
}

void main()
{
	int n;
	printf("Enter a number\n");
	scanf("%i",&n);
	printf("Factorial of %i using recursive function: %i\n",n,recursive_factorial(n));
	printf("Factorial of %i using non-recursive function: %i\n",n,factorial(n));
}

