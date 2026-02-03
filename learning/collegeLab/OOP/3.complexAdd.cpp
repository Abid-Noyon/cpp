/* // 3. Complex Class with addComplex()
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
    Complex c1(-2.5, -3.5), c2(-1.5, 2.5), c3;
    c3.addComplex(c1, c2);
    c3.display();
    return 0;
} */

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

    void input()
    {
        cout << "Enter Real and Imaginary parts: ";
        cin >> real >> imag;
    }

    void addComplex(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void display()
    {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "For 1st Complex Number:" << endl;
    c1.input();

    cout << "For 2nd Complex Number:" << endl;
    c2.input();

    c3.addComplex(c1, c2);

    c3.display();

    return 0;
}