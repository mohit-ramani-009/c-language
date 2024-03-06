#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int a[100][100],i,j,r,c,row,cols,rsum=0,csum=0;
	
	m("enter the array's row size=");
	d("%d",&r);
	
	m("enter the array's column size=");
	d("%d",&c);
	
	m("enter array's element=\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m("a[%d][%d]=",i,j);
			d("%d",&a[i][j]);
		}
	}
	
	m("enter row number=");
	d("%d",&row);
	
	m("elements of row [%d]= ",row);
	
	for(j=0;j<c;j++)
	{
		m("%d ",a[row][j]);
		rsum=rsum+a[row][j];
	}
	
	m("\nsum of row [%d]= %d\n",row,rsum);
	
	m("\n");
	
	m("enter column number=");
	d("%d",&cols);
	
	m("elements of column [%d]=",cols);
	
	for(i=0;i<r;i++)
	{
		m("%d ",a[i][cols]);
		csum=csum+a[i][cols];
	}
	m("\nsum of column [%d]= %d\n",cols,csum);

}

