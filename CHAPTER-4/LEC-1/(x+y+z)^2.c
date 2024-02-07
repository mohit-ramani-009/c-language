#include<stdio.h>
main()
{
	int x;
	int y;
	int z;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	printf("enter z");
	scanf("%d",&z);
	int result =(x+y+z)*(x+y+z);
	printf("(x+y+z)^2 =%d\n",result);
	return 0;
}
