#include<stdio.h>
#define m printf
#define d scanf

void main()
{
	int x,y,a,*p_y,*p_x;
	
	m("enter the value of x:- ");
	d("%d",&x);
	
	m("enter the value of y:- ");
	d("%d",&y);
	
	m("\nBefore swapping:\n");
	
	m("x:%d\n",x);
	m("y:%d\n",y);
	
	m("\nAfter swapping:\n ");
	
    p_x = &x;
	p_y = &y;
	
	a = *p_x;
	*p_x = *p_y;
	*p_y = a;
	
	m("x:%d\n",x);
	m("y:%d\n",y);
}
