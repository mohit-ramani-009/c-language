#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;

	clrscr();

	printf("Enter a:-");
	scanf("%d",&a);

	printf("Enter b:-");
	scanf("%d",&b);

	printf("Enter c:-");
	scanf("%d",&c);

	printf("Enter d:-");
	scanf("%d",&d);


	(a==b && b==c && c==d)

		?printf("All value are same...")
		: (a<b)

			?(a<c)

				?(a<d)
					? printf("a is minimum...")
					: printf("d is minimum...")

				:(c<d)
					? printf("c is minimum...")
					: printf("d is minimum...")

			 :(b<c)

				?(b<d)
				       ? printf("b is minimum...")
				       : printf("d is minimum...")

				:(c<d)
					? printf("c is minimum...")
					: printf("d is minimum...");



	getch();



}