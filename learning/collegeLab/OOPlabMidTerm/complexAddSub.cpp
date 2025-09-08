/* #include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void show()
    {
    if (imag >= 0)
        cout << real << " + " << imag << "i" << endl;
    else
        cout << real << " - " << -imag << "i" << endl;
}
};

int main()
{
    Complex c1, c2, c3;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();

    c3 = c1.add(c2);
    cout << "Sum = ";
    c3.show();
    c3= c1.subtract(c2);
    cout << "Subtract = ";
    c3.show();
}
 */

#include <iostream>
using namespace std;

class COMPLEX
{
    float real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    COMPLEX add(COMPLEX c)
    {
        COMPLEX result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    COMPLEX subtract(COMPLEX c)
    {
        COMPLEX result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }
    void show()
    {
        if (imag >= 0)
        {
            cout << real << " + " << imag << "i" << endl;
        }
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    COMPLEX c1, c2, c3;
    cout << "Enter first complex number: \n";
    c1.input();
    cout << "Enter second complex number: \n";
    c2.input();
    c3 = c1.add(c2);
    cout << "The sum: ";
    c3.show();
    c3 = c1.subtract(c2);
    cout << "The subtract: ";
    c3.show();
}
