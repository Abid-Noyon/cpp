#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void askForPromotion() = 0; // Pure virtual function
};

class Employee : AbstractEmployee
{
private:
    // string Name; // to test protect we will put it in protected as derived class can access it
    string Company;
    int Age;

protected:
    string Name;

public:
    // Setters and Getters
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
        {
            cout << "previous Age: " << Age << " for " << Name << endl;
            Age = age;
            cout << "Updated Age: " << age << " for " << Name << endl; // Display the updated age using the getter
        }
        else
        {
            cout << "Age must be at least 18." << endl;
        }
    }

    int getAge()
    {
        return Age;
    }

    void introduce()
    {
        cout << "Name: " << Name << ", Company: " << Company << ", Age: " << Age << endl;
    }
    // Constructor to initialize the employee's attributes
    Employee(string empName, string empCompany, int empAge) : Name(empName), Company(empCompany), Age(empAge) {}
    // Default constructor
    Employee() : Name(""), Company(""), Age(0) {} // Default constructor

    void askForPromotion()
    {
        if (Age >= 30)
        {
            cout << Name << ", you are promoted!" << endl;
        }
        else
        {
            cout << Name << ", you need more experience for a promotion." << endl;
        }
    }
};

class Developer : public Employee
{
private:
    string ProgrammingLanguage;

public:
    Developer(string name, string company, int age, string language) : Employee(name, company, age), ProgrammingLanguage(language) {}

    void code()
    {
        cout << Name << " is coding in " << ProgrammingLanguage << endl;
    }
};

class Teacher : public Employee
{
    string Subject;

public:
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age), Subject(subject) {}

    void teach()
    {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main()
{

    Employee employee1 = Employee("Abid Noyon", "Promely", 24);      // Create an instance of the Employee class
    Employee employee2 = Employee("John Doe", "Tech Solutions", 30); // Create another instance of the Employee class

    Developer dev1 = Developer("Alice Smith", "Innovatech", 28, "C++");
    Developer dev2 = Developer("Bob Johnson", "Web Solutions", 35, "JavaScript");

    Teacher teacher1 = Teacher("Charlie Brown", "School of Excellence", 40, "Mathematics");

    // Call the teach method for teacher1
    teacher1.teach();
    dev1.code();

    // Return 0 to indicate successful execution
    return 0;
}