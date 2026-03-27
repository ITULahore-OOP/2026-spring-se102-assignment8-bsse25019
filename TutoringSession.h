#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include "TeachingAssistant.h"
#include "Student.h"

// Represents a tutoring session between a TA and a student
// Demonstrates association (uses pointers to independent objects)
class TutoringSession
{
private:
    int sessionID;                  // Unique session identifier
    double durationMinutes;         // Length of session in minutes
    TeachingAssistant* ta;          // Pointer to TA (association)
    Student* student;               // Pointer to student (association)

public:
    // Constructor with all parameters
    TutoringSession(int sessionID, double durationMinutes,
                    TeachingAssistant* ta, Student* student);

    // Getter for duration
    double getDuration() const;

    // Display session details
    void displaySession() const;

    // Member operator overloading - combine two sessions
    TutoringSession operator+(const TutoringSession& other);
};

// Non-member operator overloading - compare session durations
bool operator>(TutoringSession s1, TutoringSession s2);

#endif