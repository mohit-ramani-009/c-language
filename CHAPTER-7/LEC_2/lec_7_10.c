#include<stdio.h>
#define m printf
#define d scanf

main()
{
	
int i,j,k;

	for(i=1;i<=5;i++)
	{
			for(k=i;k<=4;k++)
		{
			m(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			m("%d",j);
		}
		
		for(j=i-1;j>=1;j--)
		{
			m("%d",j);
		}

		m("\n");
	}

}
