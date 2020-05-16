//decimal to binary

#include<stdio.h>
void main()
{
	int num,binary=0,rem,n,i=1;
	printf("Enter a number\n");
	scanf("%i",&num);
	n=num;
	while(n!=0)
	{
		rem=n%2;
		binary+=rem*i;
		n/=2;
		i*=10;
	}
	printf("Binary equivalent of %i is %i\n",num,binary);
}