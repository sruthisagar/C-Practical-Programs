//Print first n prime nos

#include<stdio.h>
#include<stdlib.h>

int isPrime(int num)
{

	for(int i =2 ; i<=num/2; i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}

	return 1;
}


void printFirstPrimeNumbers(int n)
{
	int number = 2;
	while(n >0)
	{
		if(isPrime(number)){
			printf("%d\n", number);
			n--;
		}

		number++;

	}
}


void main()
{
	// int x,i,n,c=1,f=0;
	// printf("Enter the number of prime numbers to be printed\n");
	// scanf(" %i",&n);
	// printf("First %i prime numbers\n",n);
	// if(n==1)
	// {
	// 	printf("2\n");
	// 	exit(0);
	// }
	// printf("test");
	// printf("2 ");
	// for(x=3;c<n;x++)
	// {
	// 	f = 0;
	// 	for(i=2;i<x;i++)
	// 	{
	// 		if(x%i==0)
	// 		{	
	// 			f=1;	
	// 			break;
	// 		}
	// 	}
	// 	if(f==0)
	// 	{
	// 		printf("%i ",x);
	// 		c++;
	// 	}
	// }

	printFirstPrimeNumbers(10);
	// printf("%d \n", isPrime(4) );
}
