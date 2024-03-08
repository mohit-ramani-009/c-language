#include<stdio.h>
#define m printf
#define d scanf

main()
{
	
	char string[100];
	int i;
	int length=0;
	int b=0;
	
	printf("Enter any string:");
	gets(string);
	
	length=strlen(string);
	
	
	for(i=0;i<length;i++)
	{
		if(string[i]!=string[length-i-1])
		{
			b=1;
		}
	}
	if(b==0)
	{
		printf("\n\nThe sring is palindrome..");
	}
	else
	{
		printf("\n\nThe string is not palindrome..");
	}

}

