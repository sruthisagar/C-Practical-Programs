//Number palindrome or not

#include<stdio.h>
void main()
{
	int num,n,rev=0,digit;
	printf("Enter a number\n");
	scanf("%i",&num);
	n=num;
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	if(num==rev)
		printf("%i is a palindrome\n",num);
	else
		printf("%i is not a palindrome\n",num);
}