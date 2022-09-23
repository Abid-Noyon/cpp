#include <iostream>

int main(){
    
    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    std::cout << "Size of Value 1 is: " << sizeof(value1) << std::endl;
    std::cout << "Size of Value 2 is: " << sizeof(value2) << std::endl;

    unsigned int value3 {4};
    // unsigned int value4 {-5}: // compiler error cause you said it would be a positive integer

    //short and long
    short short_var {-32768}; // 2 bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var {55}; // 4 bytes
    signed signed_var {66}; 
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    long long_var {88}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long {888}; // 8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int sigend_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    return 0;

}