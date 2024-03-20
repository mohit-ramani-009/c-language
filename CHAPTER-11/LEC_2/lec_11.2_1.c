#include <stdio.h>
#define m printf
#define d scanf

void ReverseArray(int *arr, int size) 
{
    int *a = arr;
    int *b = arr + size - 1;
    
    while (a < b) 
	{
        int c = *a;
        *a = *b;
        *b = c;
        a++;
        b--;
    }
}

void main() 
{
    int size;
    int i;
    
    m("Enter the array's size: ");
    d("%d", &size);
    
    int array[size];
    
    m("Enter the array elements: \n");
    
    for (i = 0;i < size;i++) 
	{
        m("a[%d] = ", i);
        d("%d", &array[i]);
    }
    
    ReverseArray(array,size);
    
    m("Reversed array elements: \n");
    for (i = 0;i < size;i++) 
	{
        m("%d ",array[i]); 
    }
}


