#include "TutoringSession.h"
#include <iostream>

using namespace std;

// Constructor implementation
TutoringSession::TutoringSession(int sessionID, double durationMinutes,
                                 TeachingAssistant* ta, Student* student)
{
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}

// Returns session duration
double TutoringSession::getDuration() const
{
    return durationMinutes;
}

// Displays session information
void TutoringSession::displaySession() const
{
    cout << "tutoring Session ID:" << sessionID << endl;
    cout << "duration:" << durationMinutes << " minutes" << endl;

    // Check if TA pointer is valid before accessing
    if (ta != nullptr)
    {
        cout << "Teaching Assistant: " << ta->getName() << endl;
    }

    // Check if student pointer is valid before accessing
    if (student != nullptr)
    {
        cout << "Student: " << student->getName() << endl;
    }
}

// Member operator overloading - combines two sessions
// Returns a new session with combined duration
TutoringSession TutoringSession::operator+(const TutoringSession& other)
{
    // Create new session with sum of durations
    return TutoringSession(sessionID, durationMinutes + other.getDuration(), ta, student);
}

// Non-member operator overloading - compares session durations
bool operator>(TutoringSession s1, TutoringSession s2)
{
    return s1.getDuration() > s2.getDuration();
}