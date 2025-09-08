#include <iostream>
#include <cstdint>

using namespace std;

int64_t booth_multiply(int32_t multiplicand, int32_t multiplier)
{
    uint64_t A = 0;
    uint64_t M = static_cast<uint32_t>(multiplicand);
    uint64_t mask = (1ULL << 32) - 1;
    uint64_t MinusM = (~M + 1) & mask;
    uint32_t Q = static_cast<uint32_t>(multiplier);
    bool Q1 = false;
    const int n = 32;
    for (int i = 0; i < n; ++i)
    {
        bool Q0 = Q & 1;
        if (!Q0 && Q1)
        {
            A = (A + M) & mask;
        }
        else if (Q0 && !Q1)
        {
            A = (A + MinusM) & mask;
        }
        Q1 = Q0;
        uint64_t old_lsb_A = A & 1;
        bool msb_A = (A & (1ULL << (n - 1))) != 0;
        A >>= 1;
        if (msb_A)
        {
            A |= (1ULL << (n - 1));
        }
        Q >>= 1;
        if (old_lsb_A)
        {
            Q |= (1U << (n - 1));
        }
    }
    uint64_t product_unsigned = (A << 32) | static_cast<uint64_t>(Q);
    return static_cast<int64_t>(product_unsigned);
}

int main()
{
    // Example usage
    cout << "3 * 4 = " << booth_multiply(3, 4) << endl;
    cout << "3 * (-4) = " << booth_multiply(3, -4) << endl;
    cout << "(-3) * 4 = " << booth_multiply(-3, 4) << endl;
    cout << "(-3) * (-4) = " << booth_multiply(-3, -4) << endl;
    return 0;
}