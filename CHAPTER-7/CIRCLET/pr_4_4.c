#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=4;s>=i;s--)
		{
			m(" ");	
		}
		for(j=1;j<=i;j++)
		
		m("%d",j%2);	
		m("\n");
	}
}



