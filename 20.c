//Anagrams or not

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str1[20],str2[20],s1[20],s2[20],t;
	int l1,l2,i,j;
	printf("Enter first string\n");
	gets(s1);
	printf("Enter second string\n");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	strcpy(str1,s1);
	strcpy(str2,s2);
	if(l1!=l2)
	{
		printf("%s and %s are not anagrams\n",s1,s2);
		exit(0);
	}
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l1-i-1;j++)
		{
			if(str1[j]>str1[j+1])
			{	t=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=t;
			}
		}
	}
	for(i=0;i<l2;i++)
	{
		for(j=0;j<l2-i-1;j++)
		{
			if(str2[j]>str2[j+1])
			{	t=str2[j];
				str2[j]=str2[j+1];
				str2[j+1]=t;
			}
		}
	}
	if(strcmp(str1,str2)==0)		
		printf("%s and %s are anagrams\n",s1,s2);
	else		
		printf("%s and %s are not anagrams\n",s1,s2);
}