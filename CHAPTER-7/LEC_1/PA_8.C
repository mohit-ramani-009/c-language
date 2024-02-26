#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{

	int rows=5;
	int i,a,b=1;
	clrscr();

	for(i=1; i<=rows; i++)
	{
		for(a=1; a<=i; a++)
		{
			m("%d ",b);
			b++;
		}
		m("\n");
	}


	getch();

}