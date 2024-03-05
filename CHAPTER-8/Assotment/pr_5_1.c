#include<stdio.h>
	
main()

{
		
	int i,j,r,c,a[100][100];
	
	m("Enter the Array's row size=");
	d("%d",&r);
	
	m("Enter the Array's coulmn size=");
	d("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m("a[%d][%d]=",i,j);
			d("%d",&a[i][j]);
		}
	
	}
		m("Negetive number form array= ");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<0)
			m("%d ",a[i][j]);
		}
	}
}

