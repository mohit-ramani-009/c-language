#include<stdio.h>
main()
{
		
	int i;
	float n,a[100],c=1,d=1;
	
	printf("Enter the size of array=");
	scanf("%f",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c=c+a[i];
	}
	
	for(i=0;i<n;i++)
	{
		d=c/n;
	}
	printf("average of Array=%.2f",d);

}

