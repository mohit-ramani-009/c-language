#include<stdio.h>
main()
{
	int a;
	int b;
	printf("enter first angle:");
	scanf("%d",&a);
	printf("enter second angle:");
	scanf("%d",&b);
	int c=a+b;
	int third_angle=180-c;
	printf("third_angle:%d",third_angle);
	return 0;
	
}
