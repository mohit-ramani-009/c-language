
#include<stdio.h>
#include<conio.h>

main()

{

	int a;

	int b;

	int c;

	int d;

	int e;

	clrscr();

	printf("enter a=");
	scanf("%d",&a);

	printf("enter b=");
	scanf("%d",&b);

	printf("enter c=");
	scanf("%d",&c);

	printf("enter d=");
	scanf("%d",&d);

	printf("enter e=");
	scanf("%d",&e);


	if (a==b && b==c && c==d && d==e)
	{
		printf("all value are same");
	}
	else if (b==c && c==d && d==e)
	{
		printf("b,c,d,e are same");
	}

	else if (a==c && c==d && d==e)
	{
		printf("a,c,d,e are same");
	}

	else if (a==b && b==d && d==e)
	{
		printf("a,b,d,e are same");
	}

	else if(a==b && b==c && c==e)
	{
		printf("a,b,c,e are same");
	}

	else if(a==b && b==c && c==d)
	{
		printf("a,b,c,d are same");
	}

	else if (b==c && c==d && a==e)
	{
		printf("b,c,d and a,e are same");
	}

	else if (a==c && c==d && b==e)
	{
		printf("a,c,d and b,e are same");
	}

	else if (a==b && b==d && c==e)
	{
		printf("a,b,d and c,e are same");
	}

	else if (a==b && b==c && d==e)
	{
		printf("a,b,c and d,e are same");
	}

	else if (a==b && c==d && d==e)
	{
		printf("c,d,e and a,b are same");
	}

	else if (a==c && b==d && d==e)
	{
		printf("b,d,e and a,c are same");
	}

	else if (a==d && b==c && c==e)
	{
		printf("b,c,e and a,d are same");
	}

	else if (a==e && b==c && c==d)
	{
		printf("b,c,d and a,e are same");
	}

	else if (a==b && c==d)
	{
		printf("a,b and c,d are same");
	}


	else if (a==c && d==e)
	{
		printf("a,c and d,e are same");
	}

	else if (a==b && d==e)
	{
		printf("a,b and d,e are same");
	}

	else if (a==b && c==e)
	{
		printf("a,b and c,e are same");
	}

	else if (a==c && b==d)
	{
		printf("a,c and b,d are same");
	}

	else if (a==d && b==c)
	{
		printf("a,d and b,c are same");
	}

	else if (a==d && b==e)
	{
		printf("a,d and b,e are same");
	}

	else if (a==e && c==d)
	{
		printf("a,e and c,d are same");
	}

	else if (a==e && b==c)
	{
		printf("a,e and b,c are same");
	}

	else if (b==c && d==e)
	{
		printf("b,c and d,e are same");
	}

	else if (b==d && c==e)
	{
		printf("b,d and c,e are same");
	}

	else if (a==b && b==c)
	{
		printf("a,b,c are same");
	}

	else if (a==b && b==d)
	{
		printf("a,b,d are same");
	}

	else if (a==c && c==d)
	{
		printf("a,c,d are same");
	}

	else if (a==c && c==e)
	{
		printf("a,c,e are same");
	}

	else if (a==d && d==e)
	{
		printf("a,d,e are same");
	}

	else if (a==e && e==b)
	{
		printf("a,b,e are same");
	}

	else if (b==c && c==d)
	{
		printf("b,c,d are same");
	}

	else if (b==d && d==e)
	{
		printf("b,d,e are same");
	}

	else if (c==d && d==e)
	{
		printf("c,d,e are same");
	}

	else if (a==b)
	{
		printf("a and b are same");
	}


	else if (a==c)
	{
		printf("a and c are same");
	}


	else if (a==d)
	{
		printf("a and d are same");
	}

	else if (a==e)
	{
		printf("a and e are same");
	}

	else if (b==c)
	{
		printf("b and c are same");
	}


	else if (b==d)
	{
		printf("b and d are same");
	}

	else if (b==e)
	{
		printf("b and e are same");
	}

	else if (c==d)
	{
		printf("c and d are same");
	}

	else if (c==e)
	{
		printf("c and e are same");
	}

	else if (d==e)
	{
		printf("d and e are same");
	}

	else
	{
	 if(a>b)
	  {
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max...");
				}
				else
				{
					printf("e is max...");				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max...");
				}
				else
				{
					printf("e is max...");
				}
			}
		}
	}


	}
	getch();
}