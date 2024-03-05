#include<stdio.h>
#define m printf
#define d scanf
	
main()
{
	int i,j,r,c,a[100][100];

	m("Enter the array's row size=");
	d("%d",&r);
	
	m("Enter the array's column size=");
	d("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m("a[%d][%d]=",i,j);
			d("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[0][0]<a[i][j])
			{
				a[0][0]=a[i][j];
			}
		}
	}
	m("Largest element of array=%d",a[0][0]);

}

