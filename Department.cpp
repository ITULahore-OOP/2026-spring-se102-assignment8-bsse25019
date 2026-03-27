#include "Department.h"
#include <iostream>

// Constructor initializes department name and member count
Department::Department(std::string departmentName)
{
    this->departmentName = departmentName;
    memberCount = 0;  // Start with no members
}

// Adds a member to the department's collection
void Department::addMember(UniversityMember* member)
{
    // Store pointer and increment count
    members[memberCount] = member;
    memberCount++;
}

// Iterates through all members and calls their displayRole function
// Run-time polymorphism ensures correct version is called for each member type
void Department::displayAllRoles()
{
    for (int i = 0; i < memberCount; i++)
    {
        members[i]->displayRole();  // Virtual function call
    }
}