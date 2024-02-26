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
		for(a=i; a<=rows; a++)
		{
			m("%d ",a);
		}
		m("\n");
	}


	getch();

}