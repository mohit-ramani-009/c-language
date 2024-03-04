	#include<stdio.h>
	#define h printf
	#define d scanf
	
main()
{
	int a[200],b[200],c[200],n,m,i,j,sum=0;
		
	h("Enter arrry A's size=");
	d("%d",&n);
		
	for(i=0;i<n;i++)
	{
		h("a[%d] = ",i);
		d("%d",&a[i]);
		
		c[i] = a[i];
	}
		
    h("\n");
    
	h("Enter arrry B's size=");
	d("%d",&m);
	
	sum = n + m ;
	
	for(i=0;i<m;i++)
	{
		h("b[%d] = ",i);
		d("%d",&b[i]);
		
		for(j=0;j<m;j++)
		{
			c[j+n] = b[j] ;
		}
	}
	h("Array C is\n");
	
	for(i=0;i<sum;i++)
	{
		h("c[%d] = %d\n",i,c[i]);
	}
}

