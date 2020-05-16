//String concatenation

#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int i,c;
	printf("Enter first string ending with $\n");
	gets(str1);
	printf("Enter second string ending with $\n");
	gets(str2);
	for(c=0;str1[c]!='\0';c++);

	for(i=0;str2[i]!='\0';i++,c++)
		str1[c]=str2[i];
	printf("First string after concatenation\n");
	puts(str1);
}