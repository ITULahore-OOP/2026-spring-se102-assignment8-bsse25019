#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"
#include <string>

// Teaching Assistant inherits from both Student and Staff
// Virtual inheritance in Student and Staff resolves the diamond problem
// Demonstrates multiple inheritance
class TeachingAssistant : public Student, public Staff
{
private:
    int workingHours;   // Hours worked per week

public:
    // Constructor - passes parameters to both parent classes
    TeachingAssistant(std::string name, int memberID, double cgpa,
                      double salary, AccessCard card, int workingHours);

    // Override displayRole
    void displayRole() override;

    // Compile-time polymorphism - method overloading
    void gradeAssignment(int score);           // Numeric grading
    void gradeAssignment(std::string letterGrade);  // Letter grading
};

#endif