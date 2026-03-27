#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <string>
#include <iostream>

// Represents an access card for building entry
class AccessCard
{
private:
    std::string cardID;     // Unique card identifier
    int accessLevel;        // Access level (1=basic, 2=labs, etc.)

public:
    // Constructor with card ID and access level
    AccessCard(std::string cardID, int accessLevel);

    // Getter methods
    std::string getCardID();
    int getAccessLevel();

    // Display card information
    void displayCardInfo();
};

#endif