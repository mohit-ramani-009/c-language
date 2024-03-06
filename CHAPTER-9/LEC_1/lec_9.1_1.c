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
			n[i]=n[i]-32;
		}		
	}
	m("uppercase string:%s",n);	
	
}
