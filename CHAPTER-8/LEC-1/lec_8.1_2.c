#include<stdio.h>
#define m printf
#define b scanf

main()
{
		
	int i;
	float n,a[100],c=1,d=1;
	
	m("Enter the size of array=");
	b("%f",&n);
	
	for(i=0;i<n;i++)
	{
		m("a[%d]=",i);
		b("%f",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c=c+a[i];
	}
	
	for(i=0;i<n;i++)
	{
		d=c/n;
	}
	m("average of Array=%.2f",d);

}

