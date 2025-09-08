/* #include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    // Function to take input
    void input()
    {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;

        // Adjust if minutes >= 60
        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    // Function to add two times
    Time add(Time t)
    {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + (result.minutes / 60);
        result.minutes = result.minutes % 60;
        return result;
    }

    // Function to display time
    void display()
    {
        cout << hours << " : " << minutes << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.input();

    cout << "Enter second time:\n";
    t2.input();

    t3 = t1.add(t2);

    cout << "Sum of times = ";
    t3.display();

    return 0;
} */




#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    void input()
    {
        // Taking input
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;

        // converting minutes if > 60
        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    // add time
    Time add(Time t)
    {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + (result.minutes / 60);
        result.minutes = result.minutes % 60;
        return result;
    }
    void display()
    {
        cout << hours << " : " << minutes << endl;
    }
};

int main()
{
    Time t1,t2,t3;
    cout<<"Enter first time: \n";
    t1.input();
    cout<<"Enter second time: \n";
    t2.input();
    t3=t1.add(t2);
    cout<<"Sum of time: "<<endl;
    t3.display();
    return 0;
}