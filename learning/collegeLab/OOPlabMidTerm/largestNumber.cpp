/* #include <iostream>
using namespace std;

class B; // Forward declaration

class A
{
private:
    int numA;

public:
    A(int x) { numA = x; }
    friend void findMax(A, B); // Friend function declaration
};

class B
{
private:
    int numB;

public:
    B(int y) { numB = y; }
    friend void findMax(A, B); // Friend function declaration
};

// Friend function definition
void findMax(A objA, B objB)
{
    if (objA.numA > objB.numB)
        cout << "Largest = " << objA.numA << endl;
    else
        cout << "Largest = " << objB.numB << endl;
}

int main()
{
    A a1(25);
    B b1(40);

    findMax(a1, b1); // Access private members of both classes
    return 0;
}
 */

#include <iostream>
using namespace std;

class B;
class A
{
private:
    int numA;

public:
    A(int x)
    {
        numA = x;
    }
    friend void findMax(A, B);
};
class B
{
private:
    int numB;

public:
    B(int y)
    {
        numB = y;
    }
    friend void findMax(A, B);
};

void findMax(A objA, B objB)
{
    if (objA.numA > objB.numB)
    {
        cout << "Largest: " << objA.numA << endl;
    }
    else
        cout << "Largest: " << objB.numB << endl;
}
int main()
{
    A a1(10);
    B b2(15);
    findMax(a1, b2);
}