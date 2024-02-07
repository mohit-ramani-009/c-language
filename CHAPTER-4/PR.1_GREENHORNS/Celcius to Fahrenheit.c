#include<stdio.h>
main()
{
	float c;
	printf("enter celcius=");
	scanf("%f",&c);
	printf("the temperature in fehrenheit=%.1f",c*9/5+32);
	return 0;
}
