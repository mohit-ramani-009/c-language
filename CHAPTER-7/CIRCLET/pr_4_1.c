#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=41;i<=45;i++)
	{
		for(s=i;s<=1;s++)
		{
			m(" ");	
		}
		for(j=41;j<=i;j++)
		
		m("%d ",j);	
		m("\n");
	}
}


