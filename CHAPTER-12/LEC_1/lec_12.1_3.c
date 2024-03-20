#include <stdio.h>
#define m printf
#define d scanf

struct Student 
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};


int login(char username[20], char password[20]) 
{

    char correct_username[20];
    char correct_password[20];

  
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) 
    {
    	return 1;	
	}
	else
	{
		return 0;
	}
}

int main() {
    
    char username[50];
    char password[50];

    m("Enter username: ");
    d("%s", username);

    m("Enter password: ");
    d("%s", password);

    if (!login(username, password)) {
        m("Invalid username or password. Exiting...\n");
        return 1;
    }

  
    struct Student students[3];

    m("Enter details for %d students:\n",3);
    
    int i;
    
    for ( i = 0; i < 3; i++) 
	{
        m("\nStudent %d:\n", i + 1);
        
        m("ID: ");
        d("%d", &students[i].stu_id);
        m("Name: ");
        d("%s", students[i].stu_name); 
        m("Age: ");
        d("%d", &students[i].stu_age);
        m("Course: ");
        d("%s", students[i].stu_course);
        m("City: ");
        d("%s", students[i].stu_city); 
        m("Standard: ");
        d("%d", &students[i].stu_standard);
        m("School: ");
        d("%s", students[i].stu_school); 
    }

    m("\nStudent Records:\n");
    
    for ( i = 0; i < 3; i++) 
	{
        m("\nStudent %d:\n", i + 1);
        m("ID: %d\n", students[i].stu_id);
        m("Name: %s\n", students[i].stu_name);
        m("Age: %d\n", students[i].stu_age);
        m("Course: %s\n", students[i].stu_course);
        m("City: %s\n", students[i].stu_city);
        m("Standard: %d\n", students[i].stu_standard);
        m("School: %s\n", students[i].stu_school);
    }

}

