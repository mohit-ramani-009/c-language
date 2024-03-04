#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int i,n,a[100],s;
	
	m("Enter the size of array=");
	d("%d",&n);
	
	for(i=0;i<n;i++)
	{
		m("a[%d]=",i);
		d("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
	}
	m("The squares are:\n");
	
	for(i=0;i<n;i++)
	{
		m("a[%d]=%d\n",i,a[i]);
	}
}

