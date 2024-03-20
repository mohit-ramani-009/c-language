#include<stdio.h>
#define m printf
#define d scanf
struct Employee 
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() 
{
    int num_employ;
    
    m("Enter the number of employees: ");
    d("%d", &num_employ);
    
    struct Employee employ[100];

    m("Enter details for %d employees:\n",num_employ);
    
    int i;
    
    for (i = 0; i < num_employ; i++) 
	{
        m("\nEmployee %d:\n", i + 1);
        
        m("ID: ");
        d("%d", &employ[i].emp_id);
        m("Name: ");
        d("%s", employ[i].emp_name);
        m("Age: ");
        d("%d", &employ[i].emp_age);
        m("Role: ");
        d("%s", employ[i].emp_role);
        m("City: ");
        d("%s", employ[i].emp_city);
        m("Experience (in years): ");
        d("%d", &employ[i].emp_experience);
        m("Company Name: ");
        d("%s", employ[i].emp_company_name);
    }

    m("\nEmployee Records:\n");
    
    for (i = 0; i < num_employ; i++) 
	{
        m("\nEmployee %d:\n", i + 1);
        m("ID: %d\n", employ[i].emp_id);
        m("Name: %s\n", employ[i].emp_name);
        m("Age: %d\n", employ[i].emp_age);
        m("Role: %s\n", employ[i].emp_role);
        m("City: %s\n", employ[i].emp_city);
        m("Experience: %d years\n", employ[i].emp_experience);
        m("Company Name: %s\n", employ[i].emp_company_name);
	}
	
}

