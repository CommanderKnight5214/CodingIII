#include <iostream>
#include <headerfile.h>
#include <string>

School::Student(string name, string email, int gpa)
{
    this->name = name;
    this->email = email;
    this->gpa = gpa; 
}

School::display()
{
    cout << "Name: " << this->name << endl;
    cout << "Email: " << this->email << endl;
    cout << "GPA: " << this->gpa << endl; 
}