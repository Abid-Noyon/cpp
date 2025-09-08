#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student(int r)
    { // Constructor
        roll = r;
        cout << "Student created with roll = " << roll << endl;
    }
    ~Student()
    { // Destructor
        cout << "Student destroyed" << endl;
    }
};

int main()
{
    // Allocate memory and call constructor
    Student *s = new Student(101);

    delete s; // Destructor called automatically
}
