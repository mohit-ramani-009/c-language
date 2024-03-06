#include<stdio.h>
#define m printf
#define d scanf	

main()
{
	int i,j,n,a[100][100],b[100][100];
	
	m("enter the array's row & column=");
	d("%d",&n);
	
	m("enter array a's element=\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m("a[%d][%d]=",i,j);
			d("%d",&a[i][j]);
		}
	}
	m("transpose matrix of an array:\n");
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m("%d ",b[i][j]);
		}
		m("\n");
	}
}
