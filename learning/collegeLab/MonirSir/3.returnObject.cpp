#include <iostream>
using namespace std;
class Complex
{
    float x, y;
public:
    void getData(float r, float i)
    {
        x = r;
        y = i;
    }

    friend Complex sum(Complex, Complex);
    void subtract(Complex, Complex);
    void show(void);
    void input(float r, float i)
    {
        x = r;
        y = i;
    }
};

Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}

void Complex::subtract(Complex c1, Complex c2)
{
    x = c1.x - c2.x;
    y = c1.y - c2.y;
}

void Complex::show()
{
    cout << x << "+j" << y << endl;

}

int main()
{
    Complex A, B, C, D;
    A.input(3.5, 2.5); // Example Complex number A
    B.input(1.5, 4.5); // Example Complex number B
    C = sum(A, B); // Sum of A and B
    D.subtract(A, B); // Subtraction of A and B
    cout << "A = ";
    A.show();
    cout << "B = ";
    B.show();
    cout << "C = A + B = ";
    C.show(); // Display the sum
    cout << "D = A - B = ";
    D.show(); // Display the subtraction
}