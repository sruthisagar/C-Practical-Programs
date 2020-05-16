//Largest and smallest word in a sentence

#include<stdio.h>
#include<limits.h>
#include<string.h>
void main()
{
	int max=INT_MIN, min=INT_MAX,i,j,count=0,min_ind,max_ind;
	char str[50],min_str[50],max_str[50];
	printf("Enter a sentence\n");
	gets(str);
	strcat(str," ");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
			count++;
		else
		{
			if(min>count)
			{
				min=count;
				min_ind=i-count;
			}
			if (max<count)
			{
				max=count;
				max_ind=i-count;
			}
			count=0;
		}

	}
	for(i=min_ind,j=0;str[i]!=' ';i++,j++)
		min_str[j]=str[i];
	min_str[j]='\0';

	for(i=max_ind,j=0;str[i]!=' ';i++,j++)
		max_str[j]=str[i];
	max_str[j]='\0';
	
	printf("The largest word is '%s'\nThe smallest word is '%s'\n",max_str,min_str);
}