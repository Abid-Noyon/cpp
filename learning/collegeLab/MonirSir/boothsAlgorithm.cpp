#include <iostream>
#include <iomanip>
using namespace std;

// Function to perform arithmetic right shift
void arithmeticRightShift(int &A, int &Q, int &Qm1, int n)
{
    int msbA = (A >> (n - 1)) & 1; // Save sign bit of A
    Qm1 = Q & 1;                   // Update Q-1
    Q = (A & 1) ? ((Q >> 1) | (1 << (n - 1))) : (Q >> 1);
    A = (A >> 1) | (msbA << (n - 1));
}

// Booth's multiplication
int boothMultiplication(int multiplicand, int multiplier, int n)
{
    int A = 0, Q = multiplier, Qm1 = 0, M = multiplicand;

    cout << "Initial Values => A: " << A << " Q: " << Q << " Q-1: " << Qm1 << "\n";

    for (int i = 0; i < n; i++)
    {
        int Q0 = Q & 1;
        if (Q0 == 0 && Qm1 == 1)
        { // A = A + M
            A += M;
        }
        else if (Q0 == 1 && Qm1 == 0)
        { // A = A - M
            A -= M;
        }
        arithmeticRightShift(A, Q, Qm1, n);
    }

    // Combine result
    return (A << n) | (Q & ((1 << n) - 1));
}

int main()
{
    int multiplicand, multiplier;
    cout << "Enter Multiplicand: ";
    cin >> multiplicand;
    cout << "Enter Multiplier: ";
    cin >> multiplier;

    int bits = 8; // Change if needed
    int product = boothMultiplication(multiplicand, multiplier, bits);

    cout << "Product: " << product << endl;
    return 0;
}
