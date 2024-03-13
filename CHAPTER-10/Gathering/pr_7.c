#include <stdio.h>
#define m printf
#define d scanf

int addition(int a,int b) 
{
    return a + b;
}

int substraction(int a,int b) 
{
    return a - b;
}

int multiplication(int a,int b) 
{
    return a * b;
}

int division(int a,int b) 
{
    return a / b;
}

int modulos(int a,int b) 
{
    return a % b;
}

void main() 
{
    int Choice;
    int a, b;

    do 
	{
        m("Press 1 for +\n");
        m("Press 2 for -\n");
        m("Press 3 for *\n");
        m("Press 4 for /\n");
        m("Press 5 for %%\n");
        m("Press 0 to exit\n\n\n");

        m("Enter Your Choice: ");
        d("%d", &Choice);

        if (Choice == 0) 
		{
            m("Thanks for connecting with us!\n");
            m("Visit again!\n");
        } 
		
		else if (Choice >= 1 && Choice <= 5)
	    {
            m("Enter First Number: ");
            d("%d", &a);

            m("Enter Second Number: ");
            d("%d", &b);

            switch (Choice) 
			{
                case 1:
                    m("Addition of %d and %d is %d\n\n\n",a,b,addition(a,b));
                    break;

                case 2:
                    m("Subtraction of %d and %d is %d\n\n\n",a,b,substraction(a,b));
                    break;

                case 3:
                    m("Multiplication of %d and %d is %d\n\n\n",a,b,multiplication(a,b));
                    break;

                case 4:
                    m("Division of %d and %d is %d\n\n\n",a,b,division(a,b));
                    break;

                case 5:
                    m("Modulus of %d and %d is %d\n\n\n",a,b,modulos(a,b));
                    break;
            }
        } 
		
		else 
		{
            m("Invalid choice! Please select 1 to 5 or 0 to exit.\n\n\n");
        }
    } 
    
	while (Choice != 0);
}


