#include <iostream>
using namespace std;

void byValue(int num)
{
    num = 100; // This will not change the original value
}

void byReference(int &num)
{
    num = 100; // This will change the original value
}

int main()
{
    int a = 10;
    int b = 20;

    byValue(a);
    byReference(b);

    cout << "Value of a after byValue: " << a << endl;      // a is still 10
    cout << "Value of b after byReference: " << b << endl;  // b is now 100

    return 0;
}