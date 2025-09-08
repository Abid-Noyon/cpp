#include <iostream>
using namespace std;

void show(int x, int y = 0)
{
    cout << "x=" << x << ", y=" << y << endl;
}

void show(int x)
{
    cout << "x=" << x << endl;
}

int main()
{
    // show(5); // Ambiguity: Both functions can be matched
}
