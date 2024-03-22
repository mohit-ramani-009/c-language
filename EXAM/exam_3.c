#include<stdio.h>.
#define m printf
#define d scanf

main()
{
	int i,j,s;
	
	for(i=10;i>=6;i--)
	{	
		for(s=i;s<10;s++)
		{
			m(" ");
		}
			
		for(j=i;j>=6;j--)
		{
			m("%d",j);	
		}
		m("\n");
	}
}
