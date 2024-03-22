#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int n;
	
	m("enter number: ");
	d("%d",&n);
	
	if(5/n==0 && 3/n==0)
	{
		m("this number is divisible by 3 and 5");	
	}
	else
	{
		m("this number is not divisible by 3 and 5");
	}
}
