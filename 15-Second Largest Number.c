//2nd largest no

#include<stdio.h>
#include <limits.h>
void main()
{
	int num,n,i,l1,l2;
	l1=l2=INT_MIN;
	printf("Enter the number of numbers\n");
	scanf("%i",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%i",&num);
		if (num>l2)
		{
			if (num>l1)
			{
				l2 = l1;
				l1 = num;
			}
			else if(num!=l1)
				l2 = num;
		}
	}

	if(l2==INT_MIN)
		printf("Second largest number is not present\n");
	else
		printf("The second largest number is %i\n",l2);
}