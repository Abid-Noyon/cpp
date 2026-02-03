/* // // 7. Runtime Polymorphism(Shape)

// #include <iostream>
//     using namespace std;
// class Shape
// {
// public:
//     virtual void displayArea() { cout << "Area of Shape" << endl; }
// };
// class Circle : public Shape
// {
// public:
//     void displayArea() override { cout << "Area of Circle" << endl; }
// };
// class Rectangle : public Shape
// {
// public:
//     void displayArea() override { cout << "Area of Rectangle" << endl; }
// };
// class Triangle : public Shape
// {
// public:
//     void displayArea() override { cout << "Area of Triangle" << endl; }
// };
// int main()
// {
//     Shape *s;
//     Circle c;
//     Rectangle r;
//     Triangle t;
//     s = &c;
//     s->displayArea();
//     s = &r;
//     s->displayArea();
//     s = &t;
//     s->displayArea();
//     return 0;
// }
#include <iostream>
using namespace std;
class shape
{
public:
    virtual void displayArea()
    {
        cout << "Area of shape. " << endl;
    }
};
class circle : public shape
{
public:
    void displayArea() override
    {
        cout << "Area of circle. " << endl;
    }
};

int main()
{
    shape *s;
    circle c;
    s= &c;
    s->displayArea();
    return 0;
}
 */

#include <iostream>



int main()
{
    
    return 0;
}