#include<stdio.h>
main()
{
	float base_salery;
	float HRA;
	float DA;
	float TA;
	printf("base salery=");
	scanf("%f",&base_salery);
	printf("enter HRA=");
	scanf("%f",&HRA);
	printf("enter DA=");
	scanf("%f",&DA);
	printf("enter TA=");
	scanf("%f",&TA);
	float gross_salery=(base_salery)+(base_salery*HRA/100)+(base_salery*DA/100)+(base_salery*TA/100);
	printf("gross_salery:%.2f",gross_salery);
	
	return 0;
}
