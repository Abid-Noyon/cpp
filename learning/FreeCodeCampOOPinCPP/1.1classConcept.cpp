#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    string company;
    int age;
    void introduce() {
        cout << "Name: " << name << ", Company: " << company << ", Age: " << age << endl;
    }
    // Constructor to initialize the employee's attributes
    Employee(string empName, string empCompany, int empAge) 
        : name(empName), company(empCompany), age(empAge) {}
    // Default constructor
    Employee() : name(""), company(""), age(0) {} // Default constructor
    // Destructor
};

int main() {

    Employee employee1= Employee("Abid Noyon", "Promely", 24); // Create an instance of the Employee class

    // older method of setting attributes
    // employee1.name = "John Doe"; // Set the name of the employee
    // employee1.company = "Tech Solutions"; // Set the company of the employee
    // employee1.age = 30; // Set the age of the employee
    employee1.introduce(); // Call the introduce method to display employee information

    // Return 0 to indicate successful execution
    return 0;
}