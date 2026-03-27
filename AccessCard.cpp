#include "AccessCard.h"

// Constructor initializes card attributes
AccessCard::AccessCard(std::string cardID, int accessLevel)
{
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}

// Returns the card ID
std::string AccessCard::getCardID()
{
    return cardID;
}

// Returns the access level
int AccessCard::getAccessLevel()
{
    return accessLevel;
}

// Outputs card info to console
void AccessCard::displayCardInfo()
{
    std::cout << cardID << " " << accessLevel << std::endl;
}