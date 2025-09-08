// overload all operator 
#include <iostream>
using namespace std;
class Float
{
    float f1, f2;
    public:
    void set(float x, float y)
    {
        f1 = x;
        f2 = y;
    }
    Float operator +(Float obj);
    Float operator -(Float obj);
    Float operator *(Float obj);
    Float operator /(Float obj);
    void display()
    {
        cout << "f1: " << f1 << ", f2: " << f2 << endl;
    }
};

Float Float::operator +(Float obj)
{
    Float temp;
    temp.f1 = f1 + obj.f1;
    temp.f2 = f2 + obj.f2;
    return temp;
}

Float Float::operator -(Float obj)
{
    Float temp;
    temp.f1 = f1 - obj.f1;
    temp.f2 = f2 - obj.f2;
    return temp;
}

Float Float::operator *(Float obj)
{
    Float temp;
    temp.f1 = f1 * obj.f1;
    temp.f2 = f2 * obj.f2;
    return temp;
}

Float Float::operator /(Float obj)
{
    Float temp;
    temp.f1 = f1 / obj.f1;
    temp.f2 = f2 / obj.f2;
    return temp;
}
int main()
{
    Float obj1, obj2, obj3, obj4, obj5, obj6;
    obj1.set(30, 40);
    obj2.set(20, 30);
    obj3 = obj1 + obj2;
    obj4 = obj1 - obj2;
    obj5 = obj1 * obj2;
    obj6 = obj1 / obj2;
    cout << "Addition: ";
    obj3.display();
    cout << "Subtraction: ";
    obj4.display();
    cout << "Multiplication: ";
    obj5.display();
    cout << "Division: ";
    obj6.display();
}
