/* #include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

    // static data member
    static int count;

public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        count++; // every time a student is added, increment
    }

    void display()
    {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // static member function
    static void showCount()
    {
        cout << "Total number of students: " << count << endl;
    }
};

// definition of static data member (outside class)
int Student::count = 0;

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    s1.display();
    s2.display();

    // call static function using class name
    Student::showCount();

    return 0;
}
 */

#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

    static int count;

public:
    void input()
    {
        cout << "Enter roll: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        count++;
    }
    void display()
    {
        cout << "Roll: " << roll << " Name: " << name << endl;
    }
    static void showCount()
    {
        cout << "Total number of student: " << count << endl;
    }
};
int Student::count = 0;
int main()
{
    Student s1,s2;
    s1.input();
    s2.input();

    s1.display();
    s2.display();

    Student::showCount();
    return 0;
}