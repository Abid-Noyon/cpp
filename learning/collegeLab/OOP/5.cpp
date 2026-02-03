// // 5. Simple Bank Account System

// #include <iostream>
//     using namespace std;
// class BankAccount
// {
//     float balance;

// public:
//     BankAccount() { balance = 0; }
//     void deposit(float amt)
//     {
//         balance += amt;
//         cout << "Deposited.\n";
//     }
//     void withdraw(float amt)
//     {
//         if (amt > balance)
//             cout << "Insufficient balance.\n";
//         else
//         {
//             balance -= amt;
//             cout << "Withdrawn.\n";
//         }
//     }
//     void display() { cout << "Balance: " << balance << endl; }
// };
// int main()
// {
//     BankAccount acc;
//     acc.deposit(1000);
//     acc.withdraw(500);
//     acc.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class bankAccount
{
    float balance;

public:
    bankAccount()
    {
        balance = 0;
    }
    void deposit(float amt)
    {
        balance += amt;
        cout << "Deposited.\n";
    }
    void withdrawn(float amt)
    {
        if (amt > balance)
            cout << "Insufficient balance.\n";
        else
        {
            balance -= amt;
            cout << "Withdrawn.\n";
        }
    }

    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    bankAccount ac001;
    ac001.deposit(1000);
    ac001.withdrawn(800);
    ac001.display();
    return 0;
}