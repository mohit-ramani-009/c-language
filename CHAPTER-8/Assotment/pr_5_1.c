#include<stdio.h>
#define m printf
#define d scanf
	
main()

{
		
	int i,j,row,cols,a[100][100];
	
	m("Enter the Array's row size=");
	d("%d",&row);
	
	m("Enter the Array's coulmn size=");
	d("%d",&cols);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			m("a[%d][%d]=",i,j);
			d("%d",&a[i][j]);
		}
	
	}
		m("Negetive number form array= ");
		
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(a[i][j]<0)
			m("%d ",a[i][j]);
		}
	}
}

