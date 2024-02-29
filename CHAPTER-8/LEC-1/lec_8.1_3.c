#include<stdio.h>
#define m printf
#define d scanf
	
main()
{
		
	int i;
	int n,a[100],b[100],c[100];

	m("Enter the size of array=");
	d("%d",&n);
	
	m("\n");
	
	printf("Enter array A's elements\n");
	
	for(i=0;i<n;i++)
	{
		m("a[%d]=",i);
		d("%d",&a[i]);
	}
	m("\n");
	
	m("Enter array B's elemnets\n");
	
	for(i=0;i<n;i++)
	{
		m("b[%d]=",i);
		d("%d",&b[i]);
	}
	
	m("\n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	m("Array c's elemnets\n");
	
	for(i=0;i<n;i++)
	{
		m("c[%d]=%d\n",i,c[i]);
	}	
}
	
