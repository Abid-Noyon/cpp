#include <iostream>
using namespace std;
class Student{
    int rollNo;
    char name[100];
    float gpa;
public:
    Student() : rollNo(0), gpa(0.0) {
        name[0] = '\0'; // Initialize name to an empty string
        cout << "Default constructor called" << endl;
    }
    void getinfo()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 100);
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    void showinfo()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
    }
    Student(int r, const char* n, float g) : rollNo(r), gpa(g) {
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
        cout << "Constructor called for " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    Student s1;
    s1.getinfo();
    s1.showinfo();
    return 0;
}