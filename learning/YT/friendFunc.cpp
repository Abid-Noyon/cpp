// friend function example and friend class example 

#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int data;
public:
    A(int val) : data(val) {}
    friend void showData(A, B);
};

class B {
    int data;
public:
    B(int val) : data(val) {}
    friend void showData(A, B);
};

void showData(A a, B b) {
    cout << "A's data: " << a.data << endl;
    cout << "B's data: " << b.data << endl;
}

int main() {
    A a(5);
    B b(10);
    showData(a, b);
    return 0;
}