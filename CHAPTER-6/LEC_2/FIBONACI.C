#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()

{

	int n,i;
	int f=0,s=1,t;

	clrscr();

	m("enter n:");
	d("%d",&n);

	m("%d %d ",f,s);

	for (i=3; i<=n; ++i)
	{
		t=f+s;
		m("%d ",t);
		f=s;
		s=t;
	}

	getch();

}