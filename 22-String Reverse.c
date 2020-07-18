//Reverse of a string

#include<stdio.h>

char* reverse(char *str)
{
	static char rev[50];
	int c,i;
	for(c=0;str[c]!='\0';c++);
	//char* rev = (char*) malloc(c* sizeof(char));
	for(i=0;i<c;i++)
		rev[i]=str[c-i-1];
	return rev;
}

void main()
{
	char str[50];
	printf("Enter a string\n");
	gets(str);
	printf("Reverse of %s is %s\n",str,reverse(str));
}