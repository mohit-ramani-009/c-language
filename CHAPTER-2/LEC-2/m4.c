#include<stdio.h>
#include<conio.h>
main()
{

int p;
int r;
int t;
printf("enter Principal Amount:-");
scanf("%d",&p);
printf("enter Rate Per annum:-");
scanf("%d",&r);
printf("enter Time(years):-");
scanf("%d",&t);
printf("the simple intrest :%d",p*r*t/100);
return 0;
}
