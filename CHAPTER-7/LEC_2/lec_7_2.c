#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i;s++)
		{
			m(" ");	
		}
		for(j=i;j<=5;j++)
		
		m("%d",j);	
		m("\n");
	}
}



