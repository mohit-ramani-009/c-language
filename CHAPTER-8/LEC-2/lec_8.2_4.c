#include<stdio.h>
#define m printf
#define d scanf

int main() 
{
    int n,i, min;
    
    m("Enter size of array: ");
    d("%d", &n);
    
    m("\n");
    
    int array[n];
    
    m("Enter array elements:\n");
    
    for(i = 0; i < n; i++) 
	{
        m("Array element %d: ", i + 1);
        d("%d", &array[i]);
    }
    
    min = array[0]; 
    
    for(i = 1; i < n; i++)
	{
        if(array[i] < min)
		{
            min = array[i];
        }
    }
    
    m("\n");
    
    m("%d is the minimum value\n", min);
}

