#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s<=4;s++)
		{
			m(" ");	
		}
		for(j=i;j>=1;j--)
		
		m("%d",j);	
		m("\n");
	}
}



