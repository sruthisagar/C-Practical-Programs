//Matrix manipulation - menu driven

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void read(int r[SIZE][SIZE], int m, int n)
{	
	printf("\nEnter the elements\n");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%i",&r[i][j]);
}

void sum(int a[SIZE][SIZE], int b[SIZE][SIZE], int s[SIZE][SIZE])
{
	int r1,c1,r2,c2;
	printf("Matrix 1\n");
	printf("Enter the row size and column size\n");
	scanf("%i%i",&r1,&c1);
	
	printf("\nMatrix 2\n");
	printf("Enter the row size and column size\n");
	scanf("%i%i",&r2,&c2);

	if(r1!=r2||c1!=c2)
	{
		printf("\nSize mismatch\n");
		return;
	}

	printf("\nMatrix 1");
	read(a,r1,c1);
	printf("\nMatrix 2");
	read(b,r2,c2);

	printf("\nMatrix 1\n");
	display(a,r1,c1);
	printf("\nMatrix 2\n");
	display(b,r2,c2);

	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
			s[i][j]=a[i][j]+b[i][j];
	printf("\nSum of the given matrices is\n");
	display(s,r1,c1);
}

void product(int a[SIZE][SIZE], int b[SIZE][SIZE], int p[SIZE][SIZE])
{
	int r1,c1,r2,c2;
	printf("Matrix 1\n");
	printf("Enter the row size and column size\n");
	scanf("%i%i",&r1,&c1);
	
	printf("\nMatrix 2\n");
	printf("Enter the row size and column size\n");
	scanf("%i%i",&r2,&c2);

	if(c1!=r2)
	{
		printf("\nSize mismatch\n");
		return;
	}

	printf("\nMatrix 1");
	read(a,r1,c1);
	printf("\nMatrix 2");
	read(b,r2,c2);

	printf("\nMatrix 1\n");
	display(a,r1,c1);
	printf("\nMatrix 2\n");
	display(b,r2,c2);

	for(int i=0;i<r1;i++)
		for(int j=0;j<c2;j++)
		{
			p[i][j]=0;
			for(int k=0;k<c1;k++)
				p[i][j]+=a[i][k]*b[k][j];
		}
	printf("\nProduct of the given matrices is\n");
	display(p,r1,c2);
}

void transpose(int a[SIZE][SIZE], int t[SIZE][SIZE])
{
	int r,c;
	printf("Enter the row size and column size\n");
	scanf("%i%i",&r,&c);
	read(a,r,c);
	printf("\nThe given matrix is\n");
	display(a,r,c);

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			t[j][i]=a[i][j];
	printf("\nTranspose of the given matrix is\n");
	display(t,c,r);
}

void display(int d[SIZE][SIZE], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%i\t",d[i][j]);
		printf("\n");
	}
}

void main()
{
	int a[SIZE][SIZE],b[SIZE][SIZE],s[SIZE][SIZE],p[SIZE][SIZE],t[SIZE][SIZE],ch;
	char c;
	do
	{
		system("clear");
		printf("MATRIX MENU\n-----------\n");
		printf("1.Addition\n2.Multiplication\n3.Transpose\n4.Exit\n");
		printf("Enter your choice\n");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:
				system("clear");
				sum(a,b,s);
				break;
			case 2:
				system("clear");
				product(a,b,p);
				break;
			case 3:
				system("clear");
				transpose(a,t);
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice\n");

		}
		printf("\nDo you want to continue?[y/n]\n");
		scanf(" %c",&c);
	}
	while(c=='Y'||c=='y');
}