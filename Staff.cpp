#include "Staff.h"

#include <iostream>
using namespace std;

// Constructor implementation
Staff::Staff(std::string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), card(card)
{
    this->salary = salary;
}

// Returns the staff member's salary
double Staff::getSalary()
{
    return salary;
}

// Displays the role
void Staff::displayRole()
{
    std::cout << "Role: Staff" << std::endl;
}

// Displays the access card information
void Staff::displayCard()
{
    card.displayCardInfo();
}