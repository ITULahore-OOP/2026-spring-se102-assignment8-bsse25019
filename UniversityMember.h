#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <string>

// Abstract base class for all university members
class UniversityMember
{
private:
    std::string name;   // Members full name
    int memberID;       // Unique identifier for the member

public:
    // Constructor initializes name and ID
    UniversityMember(std::string name, int memberID);
    virtual ~UniversityMember();

    // Getter methods for private attributes
    std::string getName();
    int getMemberID();

    // Pure virtual function - makes this class abstract
    // Forces derived classes to implement their own displayRole
    virtual void displayRole() = 0;
};

#endif