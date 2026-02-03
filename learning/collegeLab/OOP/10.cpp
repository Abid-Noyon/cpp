// 10. Student Marks and Grade

#include <iostream>
    using namespace std;
class Student
{
    string name;
    int marks[5], total = 0;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
    }
    void displayResult()
    {
        float avg = total / 5.0;
        cout << "Total: " << total << ", Avg: " << avg << endl;
        if (avg >= 90)
            cout << "Grade: A";
        else if (avg >= 80)
            cout << "Grade: B";
        else
            cout << "Grade: C";
        cout << endl;
    }
};
int main()
{
    Student s;
    s.input();
    s.displayResult();
    return 0;
}