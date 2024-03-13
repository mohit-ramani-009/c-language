#include <stdio.h>
#define m printf
#define d scanf

int addition(int array[],int size) 
{
    int sum=0,i;
    
    for (i=0;i<size;i++) 
	{
        sum += array[i];
    }
    return sum;
}

void main() 
{
    int size;
    
    m("Enter the size of the array: ");
    d("%d", &size);
    
    int array[size];
    m("Enter the elements of the array:\n");
    
    int i;
    
    for (i = 0; i < size; i++) 
	{
        d("%d",&array[i]);
    }
    
    int sum = addition(array,size);
    m("The sum of the array is: %d\n",sum);   
}


