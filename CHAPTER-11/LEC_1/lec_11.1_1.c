#include<stdio.h>
#define m printf
#define d scanf

void main()
{
	int n,i;
	
	int a[5];
	
	m("enter array elements\n");
	
	for(i=0;i<5;i++)
	{
		m("a[%d]= ",i);
		d("%d",&a[i]);
	}
	
	m("\n square of each elements:\n");
	
	for(i=0;i<5;i++)
	{
		m("%d \n",(*(a+i)) * (*(a+i)));
	}
}

