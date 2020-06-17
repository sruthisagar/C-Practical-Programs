//Store n employee details and display data of a given employee

#include<stdio.h>
#include<stdlib.h>

struct Height
{
	int feet, inches;
};

union Data
{
	float employee_Weight;
	struct Height employee_Height;
};

struct Employee
{
	long employee_No;
	char employee_Name[30];
	union Data employee_Data;
};

void main()
{
	int n, i, f=0;
	long x;
	printf("Enter the number of employees\n");
	scanf(" %i",&n);
	struct Employee e[n];
	int choice[n];
	for(i=0; i<n; i++)
	{
		printf("\nEnter the employee no and name\n");
		scanf(" %li %s", &e[i].employee_No, e[i].employee_Name);
		printf("Enter 1 for weight and 2 for height\n");
		scanf(" %i",&choice[i]);
		if(choice[i]==1)
		{
			printf("Enter the weight(in kg)\n");
			scanf(" %f", &e[i].employee_Data.employee_Weight);
		}
		else if(choice[i]==2)
		{
			printf("Enter the height(in feet and inches)\n");
			scanf(" %i %i",&e[i].employee_Data.employee_Height.feet, &e[i].employee_Data.employee_Height.inches);
		}
		else
		{
			printf("Invalid choice\n");
			exit(0);
		}
	}
	printf("\nEnter the employee no of the employee whose data is to be displyed\n");
	scanf(" %li",&x);
	for(i=0; i<n; i++)
	{
		if(x==e[i].employee_No)
		{
			if(choice[i]==1)
				printf("\nEmployee no: %li\nName: %s\nWeight: %.2f kg\n", e[i].employee_No, e[i].employee_Name, e[i].employee_Data.employee_Weight);
			else if(choice[i]==2)
				printf("\nEmployee no: %li\nName: %s\nHeight: %i feet %i inches\n", e[i].employee_No, e[i].employee_Name, e[i].employee_Data.employee_Height.feet, e[i].employee_Data.employee_Height.inches);
			f=1;
			break;
		}
	}
	if(f==0)
		printf("\nEmployee not found\n");
}
