#include<stdio.h>
#define m printf
#define d scanf

main()
{	
	char n[100];
	
	m("enter string:- ");
	d("%s",&n);
	
	int i;
	
	for(i=0;n[i]<=n;i++)
	{
		if(n[i]>=97 && n[i]<=122)
		{
			m("%c",n[i]-32);	
		}	
		
		else if(n[1]>=65 && n[i]<=90)
		{
			m("%c",n[i]+32);
		}
	}
	m("%c",n);
	
}
