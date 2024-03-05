#include<stdio.h>
#define m printf
#define d scanf
main()
{
	int a[100][100],i,j,r,c,ro,co,rsum=0,csum=0;
	
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
	d("%d",&ro);
	
	m("elements of row [%d]= ",ro);
	
	for(j=0;j<c;j++)
	{
		m("%d ",a[ro][j]);
		rsum=rsum+a[ro][j];
	}
	
	m("\nsum of row [%d]= %d\n",ro,rsum);
	
	m("\n");
	
	m("enter column number=");
	d("%d",&co);
	
	m("elements of column [%d]=",co);
	
	for(i=0;i<r;i++)
	{
		m("%d ",a[i][co]);
		csum=csum+a[i][co];
	}
	m("\nsum of column [%d]= %d\n",co,csum);

}

