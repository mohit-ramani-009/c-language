#include <stdio.h>
#define m printf
#define d scanf

main()
{
	int b;
	
	m("enter b:- ");
	d("%d",&b);
	
    int array[b][b];
    int sum = 0;
    int i,j;

    m("Enter array elements:\n");
    
    for (i = 0; i < b; i++) 
	{
        for (j = 0; j < b; j++) 
		{
            m("a[%d][%d] = ", i, j);
            d("%d", &array[i][j]);
        }
    }

   
    for (i = 0; i < b; i++)
	{
        sum += array[i][i]; 
        sum += array[i][b - 1 - i];
	}

   if (b % 2 == 1)
        sum -= array[b / 2][b / 2];

    m("Sum of elements of the cross diagonal: %d\n\n", sum);

    m("\n");
    
    for (i = 0; i <b; i++) 
	{
        for (j = 0; j <b; j++) 
		{
            if (i == j || i == b - 1 - j)
                m("%d ", array[i][j]);
                
            else
                m("  ");
        }
        m("\n");
    }
}

