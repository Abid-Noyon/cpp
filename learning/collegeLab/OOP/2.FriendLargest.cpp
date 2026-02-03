/* // 2. Largest among three using Friend Function

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
    //  or
    //     int maxVal = c; // Assume c is largest initially

    // if (objA.a > maxVal)
    // {
    //     maxVal = objA.a;
    // }
    // if (objB.b > maxVal)
    // {
    //     maxVal = objB.b;
    // }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number: ";
    cin>>num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;
    ClassA obj1(num1);
    ClassB obj2(num2);
    findMax(obj1, obj2, num3);
    return 0;
} */

#include <iostream>
using namespace std;

class classB;
class classA
{
    int a;
    public:
    classA(int val): a(val){}
    friend void findMax(classA, classB, int);
};
class classB
{
    int b;
    public:
    classB(int val): b(val){}
    friend void findMax(classA, classB, int);
};

void findMax(classA objA, classB objB, int c)
{
    int maxVal=(objA.a>objB.b)?((objA.a>c)?objA.a:c):((objB.b>c)? objB.b: c);
    cout<<"Largest is: " <<maxVal<<endl;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;
    classA obj1(num1);
    classB obj2(num2);
    findMax(obj1, obj2, num3);
    return 0;
}