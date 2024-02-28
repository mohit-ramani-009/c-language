#include<stdio.h>
#define m printf
#define d scanf

main()
{

	int i,j,k;


	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			m("%d",j);
		}
		
		for(k=i;k<=4;k++)
		{
			m("  ");
		}
		
		for(j=i;j>=1;j--)
		{
			m("%d",j);
		}


	printf("\n");
	}
}






