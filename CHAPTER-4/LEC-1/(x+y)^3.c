#include<stdio.h>
main()
{
	int x;
	int y;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	int result =(x+y)*(x+y)*(x+y);
	printf("(x+y)^3 =%d\n",result);
	return 0;
}
