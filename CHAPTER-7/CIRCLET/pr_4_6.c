#include<stdio.h>
#define m printf
#define d scanf

main()
{
	
int i,j,k;

	for(i=5;i>=1;i--)
	{
			for(k=1;k<=i;k++)
		{
			m(" ");
		}
		
		for(j=i;j<=5;j++)
		{
			m("%d",j);
		}
		
		for(j=4;j>=i;j--)
		{
			m("%d",j);
		}

		m("\n");
	}

}
