//Armstrong no or not

#include<stdio.h>
void main()
{
	int num,n,d,a=0;
	printf("Enter a number\n");
	scanf("%i",&num);
	n=num;
	while(n!=0)
	{
		d=n%10;
		a+=d*d*d;
		n/=10;
	}
	if(a==num)
		printf("%i is an armstrong number\n",num);
	else
		printf("%i is not an armstrong number\n",num);
}
