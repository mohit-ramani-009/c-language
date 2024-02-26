#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter any number:-");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		sum=sum+i;


	}
	printf("The sum of all number from 1 to %d is:%d\n",n,sum);

	getch();
	return 0;
}
