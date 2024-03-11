#include<stdio.h>
#define m printf
#define d scanf

ramani()
{
	int num;
	
	m("enter any number:- ");
	d("%d",&num);
	
	if (num % 3==0 && num % 5==0)
	{
		m("the given number is divisible by both 3 & 5.");
	}
	
	else
	{
		m("the given number is not divisible by both 3 & 5.");
	}
	
	
}

main()
{	
	ramani();
}
