#include<stdio.h>
#define m printf
#define d scanf

int string(char a[])
{
	return strlen(a);
}

void main()
{
	char a[100];
	
	m("enter any string:- ");
	d("%s",&a);
	
	int length = string(a);
	
	m("length is :- %d",length);
}
