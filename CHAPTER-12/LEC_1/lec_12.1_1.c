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

int main() 
{
   
    struct Student students[3];
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

    printf("\nStudent Records:\n");
    
    for (i = 0; i < 3; i++) 
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

