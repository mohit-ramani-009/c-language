#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s>=1;s--)
		{
			m(" ");	
		}
		for(j=5;j>=i;j--)
		
		m("%d",j);	
		m("\n");
	}
}



