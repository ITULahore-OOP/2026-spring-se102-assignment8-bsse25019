#include "Student.h"

#include <iostream>
using namespace std;

// Constructor implementation
Student::Student(std::string name, int memberID, double cgpa)
    : UniversityMember(name, memberID)
{
    this->cgpa = cgpa;
}

// Returns current CGPA
double Student::getCGPA()
{
    return cgpa;
}

// Updates CGPA to new value
void Student::updateCGPA(double newCGPA)
{
    cgpa = newCGPA;
}

// Displays the role of this member
void Student::displayRole()
{
    std::cout << "Role: Student" << std::endl;
}