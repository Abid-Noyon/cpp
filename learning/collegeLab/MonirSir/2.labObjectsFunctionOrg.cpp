#include <iostream>
using namespace std;
class Time
{
    int hours, minutes;

public:
    void getTime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void putTime(void)
    {
        cout << "Hours: " << hours << " Minutes: " << minutes << endl;
    }
    void sum(Time, Time);
};
void Time::sum(Time t1, Time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;         // Add overflow from minutes to hours
    minutes = minutes % 60;       // Keep minutes within 0-59
    hours += t1.hours + t2.hours; // Add hours
}

int main()
{
    Time T1, T2, T3;
    T1.getTime(2, 45); // Example time 1
    T2.getTime(3, 30); // Example time 2
    T3.sum(T1, T2);    // Sum of T1 and T2
    cout << "T1= ";
    T1.putTime();
    cout << "T2= ";
    T2.putTime();
    cout << "T3= ";
    T3.putTime(); // Display the sum
}