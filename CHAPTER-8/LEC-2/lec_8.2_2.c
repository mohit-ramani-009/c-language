#include<stdio.h>
#define md printf
#define bd scanf
	
main()

{
	int n,m,i,o=0,a[100];
	
	md("Enter the starting year=");
	bd("%d",&n);
	
	md("Enter the ending year=");
	bd("%d",&m);
	
	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		{
			a[o]=i;
			o++;
		}
	}
	
	for(i=0;i<o;i++)
	{
		md("a[%d]=%d\n",i,a[i]);
	}
}
