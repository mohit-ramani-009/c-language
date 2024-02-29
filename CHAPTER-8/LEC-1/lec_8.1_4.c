#include<stdio.h>
#define m printf
#define d scanf

main()
{
	int n;
	m("Enter size of array:- ");
	d("%d",&n);
	
	m("\n");
	
	int marks[n],i;
	
	for(i=0;i<n;i++)
	{
		m("Enter the all marks:-",i);
		d("%d",&marks[i]);
		
		if(marks[i]>=35)
		{
			m("is pass\n");
		}
		
		else
		{
			m("is fail\n");
		}
	}
	
	
}
