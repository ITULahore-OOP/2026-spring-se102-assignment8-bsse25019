#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"

// Department class - demonstrates aggregation
// Contains a collection of UniversityMember pointers
class Department
{
private:
    std::string departmentName;             // Name of the department
    UniversityMember* members[50];          // Array of member pointers (aggregation)
    int memberCount;                        // Current number of members

public:
    // Constructor with department name
    Department(std::string departmentName);

    // Add a member to the department (aggregation)
    void addMember(UniversityMember* member);

    // Display all members' roles using run-time polymorphism
    void displayAllRoles();
};

#endif