#include<stdio.h>
#define m printf
#define d scanf
	
main()
{
	int i,j,row,cols,a[100][100];

	m("Enter the array's row size=");
	d("%d",&row);
	
	m("Enter the array's column size=");
	d("%d",&cols);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			m("a[%d][%d]=",i,j);
			d("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(a[0][0]<a[i][j])
			{
				a[0][0]=a[i][j];
			}
		}
	}
	m("Largest element of array=%d",a[0][0]);

}

