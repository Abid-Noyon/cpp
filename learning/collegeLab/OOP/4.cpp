// 4. Employee Class(Salary Threshold)

#include <iostream>
    using namespace std;
class Employee
{
    string name, dept;
    int id;
    float salary;

public:
    void input()
    {
        cout << "Enter Name, ID, Dept, Salary: ";
        cin >> name >> id >> dept >> salary;
    }
    void displayIfAbove(float threshold)
    {
        if (salary > threshold)
            cout << name << " (" << id << ") - " << salary << endl;
    }
};
int main()
{
    Employee emp[3];
    for (int i = 0; i < 3; i++)
        emp[i].input();
    cout << "Employees with salary > 5000:\n";
    for (int i = 0; i < 3; i++)
        emp[i].displayIfAbove(5000);
    return 0;
}