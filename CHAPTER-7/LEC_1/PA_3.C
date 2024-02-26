#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{

	int rows=5;
	int i,a;
	clrscr();

	for(i=rows; i>= 1; i--)
	{
		for(a=rows; a>=i; a--)
		{
			m("%d ",i);
		}
		m("\n");
	}


	getch();

}