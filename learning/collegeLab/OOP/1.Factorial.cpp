/* // 1. Factorial using Class and Encapsulation
#include <iostream>
    using namespace std;
class Factorial
{
private:
    int num;

public:
    Factorial(int n)
    {
        num = n;
    }
    int calculate()
    {
        int f = 1;
        for (int i = 1; i <= num; i++)
            f *= i;
        return f;
    }
};
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    Factorial obj(n);
    cout << "Factorial: " << obj.calculate() << endl;
    return 0;
} */

#include <iostream>
using namespace std;

class factorial
{
private:
    int num;

public:
    factorial(int n)
    {
        num = n;
    }
    int calculate()
    {
        int f = 1;
        for (int i = 1; i <= num; i++)
        {
            f*=i;
        }
        return f;
    }
};

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    factorial obj(n);
    cout<<"Factorial: " <<obj.calculate()<<endl;
    return 0;
}