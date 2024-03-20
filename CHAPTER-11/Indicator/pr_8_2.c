#include<stdio.h>
#define m printf
#define d scanf

swap(int *a,int *b)
{
	*a=(*a)+(*b);
	*b=(*a)-(*b);
	*a=(*a)-(*b);	
}

int main()
{
		int n1,n2;
		
		m("Enter any number a= ");
		d("%d",&n1);
		m("Enter any number b= ");
		d("%d",&n2);
		
		swap(&n1,&n2);
		
		m(" a=%d \n b=%d \n",n1,n2);
		
}

