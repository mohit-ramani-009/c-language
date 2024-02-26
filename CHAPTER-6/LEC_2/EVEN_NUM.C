#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()

{

	int i,n;

	clrscr();

	m("enter n:");
	d("%d",&n);

	i=1;

	do
	{
		if(i%2==0)
		{
			m("%d\n",i);
		}

		i++;
	}

	while(i<=n);


	getch();

}