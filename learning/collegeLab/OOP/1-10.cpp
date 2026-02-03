1. Factorial using Class and Encapsulation

    C++
#include <iostream>
    using namespace std;
class Factorial
{
private:
    int num;

public:
    Factorial(int n)
    {
        num = n;
        // [cite_start]
    } // Constructor [cite: 4]
    int calculate()
    {
        int f = 1;
        for (int i = 1; i <= num; i++)
            f *= i;
        return f;
    }
};
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    Factorial obj(n);
    cout << "Factorial: " << obj.calculate() << endl;
    return 0;
}
2. Largest among three using Friend Function

    C++
#include <iostream>
    using namespace std;
class ClassB; // Forward declaration
class ClassA
{
    int a;

public:
    ClassA(int val) : a(val) {}
    friend void findMax(ClassA, ClassB, int);
};
class ClassB
{
    int b;

public:
    ClassB(int val) : b(val) {}
    friend void findMax(ClassA, ClassB, int);
};
void findMax(ClassA objA, ClassB objB, int c)
{
    int maxVal = (objA.a > objB.b) ? ((objA.a > c) ? objA.a : c) : ((objB.b > c) ? objB.b : c);
    cout << "Largest is: " << maxVal << endl;
}
int main()
{
    ClassA obj1(10);
    ClassB obj2(20);
    int num3 = 15;
    findMax(obj1, obj2, num3);
    return 0;
}
3. Complex Class with addComplex()

    C++
#include <iostream>
    using namespace std;
class Complex
{
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    void addComplex(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void display() { cout << real << " + " << imag << "i" << endl; }
};
int main()
{
    Complex c1(2.5, 3.5), c2(1.5, 2.5), c3;
    c3.addComplex(c1, c2);
    c3.display();
    return 0;
}
4. Employee Class(Salary Threshold)

    C++
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
5. Simple Bank Account System

    C++
#include <iostream>
    using namespace std;
class BankAccount
{
    float balance;

public:
    BankAccount() { balance = 0; }
    void deposit(float amt)
    {
        balance += amt;
        cout << "Deposited.\n";
    }
    void withdraw(float amt)
    {
        if (amt > balance)
            cout << "Insufficient balance.\n";
        else
        {
            balance -= amt;
            cout << "Withdrawn.\n";
        }
    }
    void display() { cout << "Balance: " << balance << endl; }
};
int main()
{
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(500);
    acc.display();
    return 0;
}
6. Time Class(Add two times)

    C++
#include <iostream>
    using namespace std;
class Time
{
    int h, m, s;

public:
    Time(int hr = 0, int mi = 0, int se = 0)
    {
        h = hr;
        m = mi;
        s = se;
    }
    void add(Time t1, Time t2)
    {
        s = t1.s + t2.s;
        m = t1.m + t2.m + (s / 60);
        s %= 60;
        h = t1.h + t2.h + (m / 60);
        m %= 60;
    }
    void display() { cout << h << ":" << m << ":" << s << endl; }
};
int main()
{
    Time t1(2, 50, 30), t2(1, 20, 40), t3;
    t3.add(t1, t2);
    t3.display();
    return 0;
}
7. Runtime Polymorphism(Shape)

    C++
#include <iostream>
    using namespace std;
class Shape
{
public:
    virtual void displayArea() { cout << "Area of Shape" << endl; }
};
class Circle : public Shape
{
public:
    void displayArea() override { cout << "Area of Circle" << endl; }
};
class Rectangle : public Shape
{
public:
    void displayArea() override { cout << "Area of Rectangle" << endl; }
};
class Triangle : public Shape
{
public:
    void displayArea() override { cout << "Area of Triangle" << endl; }
};
int main()
{
    Shape *s;
    Circle c;
    Rectangle r;
    Triangle t;
    s = &c;
    s->displayArea();
    s = &r;
    s->displayArea();
    s = &t;
    s->displayArea();
    return 0;
}
8. Inheritance(Square and Cube)

    C++
#include <iostream>
    using namespace std;
class Number
{
protected:
    int num;

public:
    Number(int n) { num = n; }
};
class Square : public Number
{
public:
    Square(int n) : Number(n) {}
    int getSquare() { return num * num; }
};
class Cube : public Number
{
public:
    Cube(int n) : Number(n) {}
    int getCube() { return num * num * num; }
};
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    Square sq(n);
    Cube cu(n);
    cout << "Square: " << sq.getSquare() << endl;
    cout << "Cube: " << cu.getCube() << endl;
    return 0;
}
9. Unique words from file

    C++
#include <iostream>
#include <fstream>
#include <set>
#include <string>
    using namespace std;

int main()
{
    ifstream inFile("input.txt"); // Ensure input.txt exists
    ofstream outFile("unique.txt");
    set<string> words;
    string word;

    if (inFile.is_open())
    {
        while (inFile >> word)
        {
            words.insert(word);
        }
        for (auto w : words)
            outFile << w << endl;
        cout << "Unique words written to unique.txt";
    }
    else
        cout << "File not found.";
    return 0;
}
10. Student Marks and Grade

    C++
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