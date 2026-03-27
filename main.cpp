#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main()
{
    // Create access cards for different access levels
    AccessCard c1("AC-001", 1), c2("AC-002", 2), tc("AC-TA1", 2);

    // Create students
    Student s1("Alice", 101, 3.8), s2("Bob", 102, 3.5);

    // Create staff members
    Staff st1("Dr Smith", 201, 75000, c1), st2("Mr Jones", 202, 60000, c2);

    // Create teaching assistant (demonstrates diamond problem resolution)
    TeachingAssistant ta("Charlie", 301, 3.9, 20000, tc, 15);

    // Create department and add all members (aggregation)
    Department d("CS");
    d.addMember(&s1);
    d.addMember(&s2);
    d.addMember(&st1);
    d.addMember(&st2);
    d.addMember(&ta);

    // Create tutoring sessions (association)
    TutoringSession t1(1, 45, &ta, &s1), t2(2, 30, &ta, &s2);

    int choice;  // User menu choice

    // Main program loop
    do
    {
        // Display menu options
        cout << "\n========================================" << endl;
        cout << "|         UNIVERSITY SYSTEM           |" << endl;
        cout << "========================================" << endl;
        cout << "| 1. Show All Member Roles            |" << endl;
        cout << "| 2. View Tutoring Sessions           |" << endl;
        cout << "| 3. Merge Tutoring Sessions          |" << endl;
        cout << "| 4. Grade Student Assignment         |" << endl;
        cout << "| 5. Exit Program                     |" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Option 1: Display all roles (run-time polymorphism)
        if (choice == 1)
        {
            d.displayAllRoles();
        }
        // Option 2: Display session details
        else if (choice == 2)
        {
            t1.displaySession();
            t2.displaySession();
        }
        // Option 3: Merge sessions using operator overloading
        else if (choice == 3)
        {
            TutoringSession merged = t1 + t2;  // Using overloaded + operator
            cout << "merged " << merged.getDuration() << " mins" << endl;
        }
        // Option 4: Grade assignment (compile-time polymorphism)
        else if (choice == 4)
        {
            int score;
            cout << "score ";
            cin >> score;
            ta.gradeAssignment(score);  // Calls int version of gradeAssignment
        }

    } while (choice != 5);  // Exit when user chooses 5

    return 0;
}