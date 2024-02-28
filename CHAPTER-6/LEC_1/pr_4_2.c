#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,j,k=11;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		m("%d ",k);
		k++;	
		}
		
		m("\n");
	}
}


