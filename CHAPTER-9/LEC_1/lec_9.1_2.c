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
		if(n[i]>=65 && n[i]<=90)
		{
			n[i]=n[i]+32;
		}		
	}
	m("lower string:%s",n);	
	
}
