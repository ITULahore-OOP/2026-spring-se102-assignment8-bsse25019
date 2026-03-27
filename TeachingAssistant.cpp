#include "TeachingAssistant.h"
#include <iostream>

// Constructor - initializes all base classes and member
TeachingAssistant::TeachingAssistant(std::string name, int memberID, double cgpa,
                                     double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberID),
      Student(name, memberID, cgpa),
      Staff(name, memberID, salary, card)
{
    this->workingHours = workingHours;
}

// Displays the role (run-time polymorphism)
void TeachingAssistant::displayRole()
{
    std::cout << "Role: Teaching Assistant" << std::endl;
}

// Overloaded method - handles numeric scores
void TeachingAssistant::gradeAssignment(int score)
{
    std::cout << "numeric score: " << score << "/100" << std::endl;
}

// Overloaded method - handles letter grades
void TeachingAssistant::gradeAssignment(std::string letterGrade)
{
    std::cout << "letter grade: " << letterGrade << std::endl;
}