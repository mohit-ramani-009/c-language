#include<stdio.h>
#define m printf
#define d scanf

main()

{
	int array[] = {5,9,5,8,7};
	
	int length =sizeof(array) /sizeof(array[0]);
	
	int i;
	
	for(i=0;i<=4;i++)
	{
		m("array is:-%d\n",array[i]);
	}
	
	m("length of an array:- %d",length);
}
