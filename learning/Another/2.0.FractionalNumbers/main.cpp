#include <iostream>

int main(){
    
    //declare and initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //print out the size
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;
    

    return 0;

}