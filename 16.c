//Transpose of a matrix

#include<stdio.h>
void main()
{
	int a[20][20],m,n,i,j,t,l;
	printf("Enter the row size\n");
	scanf("%i",&m);
	printf("Enter the column size\n");
	scanf("%i",&n);
	printf("Enter the elements\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);

	printf("The given matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%i ",a[i][j]);
		printf("\n");
	}	

	if(n>m)
		l=n;
	else
		l=m;

	for(i=0;i<l;i++)
		for(j=i;j<l;j++)
		{
				t=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=t;
		}

	printf("Transpose of the given matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%i ",a[i][j]);
		printf("\n");
	}
}
