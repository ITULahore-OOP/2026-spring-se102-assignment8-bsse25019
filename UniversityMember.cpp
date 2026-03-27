#include "UniversityMember.h"

// Constructor implementation
UniversityMember::UniversityMember(std::string name, int memberID)
{
    this->name = name;
    this->memberID = memberID;
}

// Virtual destructor (empty implementation)
UniversityMember::~UniversityMember() {}

// Returns the member's name
std::string UniversityMember::getName()
{
    return name;
}

// Returns the member's ID
int UniversityMember::getMemberID()
{
    return memberID;
}