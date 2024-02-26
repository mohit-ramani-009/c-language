#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{

	int rows=5;
	int i,a;
	char b ='a';
	clrscr();

	for(i=1; i<= rows; i++)
	{
		for(a=1; a<=i; a++)
		{
			m("%c ",b);
			b--;
		}
		b='a'+i;
		m("\n");
	}


	getch();

}