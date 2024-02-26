#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,factorial=1;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		factorial=factorial*i;
	}
	printf("the factorial is=%d",factorial);
	getch();
	return 0;
}
