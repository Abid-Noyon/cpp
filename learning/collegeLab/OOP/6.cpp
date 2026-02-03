// 6. Time Class(Add two times)

#include <iostream>
    using namespace std;
class Time
{
    int h, m, s;

public:
    Time(int hr = 0, int mi = 0, int se = 0)
    {
        h = hr;
        m = mi;
        s = se;
    }
    void add(Time t1, Time t2)
    {
        s = t1.s + t2.s;
        m = t1.m + t2.m + (s / 60);
        s %= 60;
        h = t1.h + t2.h + (m / 60);
        m %= 60;
    }
    void display() { cout << h << ":" << m << ":" << s << endl; }
};
int main()
{
    Time t1(2, 50, 30), t2(1, 20, 40), t3;
    t3.add(t1, t2);
    t3.display();
    return 0;
}