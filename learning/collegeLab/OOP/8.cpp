// 8. Inheritance(Square and Cube)

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