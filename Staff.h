#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

// Staff class - virtually inherits from UniversityMember
// Demonstrates composition (contains AccessCard object)
class Staff : virtual public UniversityMember
{
private:
    double salary;          // Staff member's annual salary
    AccessCard card;        // Access card (composition relationship)

public:
    // Constructor initializes all staff attributes
    Staff(std::string name, int memberID, double salary, AccessCard card);

    // Getter for salary
    double getSalary();

    // Override the pure virtual function
    void displayRole() override;

    // Display access card information
    void displayCard();
};

#endif