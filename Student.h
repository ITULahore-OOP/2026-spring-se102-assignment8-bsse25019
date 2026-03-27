#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"

// Student class - virtually inherits from UniversityMember
// Virtual inheritance helps resolve the diamond problem
class Student : virtual public UniversityMember
{
private:
    double cgpa;    // Cumulative Grade Point Average

public:
    // Constructor initializes name, ID, and CGPA
    Student(std::string name, int memberID, double cgpa);

    // Getter for CGPA
    double getCGPA();

    // Update CGPA value
    void updateCGPA(double newCGPA);

    // Override the pure virtual function from base class
    void displayRole() override;
};

#endif