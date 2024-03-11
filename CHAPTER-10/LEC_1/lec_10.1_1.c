#include<stdio.h>
#define m printf
#define d scanf

ramani()
{
	int number;
	
	m("enter any number:- ");
	d("%d",&number);
	
	m("cube is :- %d",number*number*number);
	
	
}

main()
{	
	ramani();
}
