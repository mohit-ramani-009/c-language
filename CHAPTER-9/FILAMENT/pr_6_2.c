#include<stdio.h>
#define m printf
#define d scanf

main()
{
	char string[100];
	int frequency[100]={0};
	
	m("enter any string:- ");
	gets(string);
	
	int i;
	int length = strlen(string);
	
	for(i=0;i<length;i++)
	{
		frequency[string[i]]++;
	} 
	
	m("freqrncy of latter:\n");
	
	for(i=0;i<100;i++)
	{
		if(frequency[i]!=0) 
		{
			m("%c => %d \n",i,frequency[i]);
		}
	}
	
}
