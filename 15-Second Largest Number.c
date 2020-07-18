//2nd largest no

#include<stdio.h>
void main()
{
	int num,n,i,l1,l2;
	printf("Enter the number of numbers\n");
	scanf("%i",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%i",&num);
		if(i==0)
			l1=l2=num;
		else
		{
			if(num>l1)
			{
				l2=l1;
				l1=num;
			}
			else
				if(num>l2)
					l2=num;		
		}
	}
	printf("The second largest number is %i\n",l2);
}