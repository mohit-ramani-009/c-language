#include <stdio.h>
#define m printf
#define d scanf

main()

{
    int i, j, a, n, number[30];
        
    m("Enter the value of N:- ");
    d("%d", &n);
    
    m("\n");
 
    m("Enter the numbers \n");
        
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        m("The number is ascendig number: \n");
        
        for (i = 0; i < n; ++i)
            m("%d\n", number[i]);
}







