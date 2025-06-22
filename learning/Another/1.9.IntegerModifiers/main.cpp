#include <iostream>

int main(){
    
    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;
    std::cout << "Size of Value1 is: " << sizeof(value1) << std::endl;
    std::cout << "Size of Value2 is: " << sizeof(value2) << std::endl;

    unsigned int value3 {4};
    // unsigned int value4 {-5}: // compiler error cause you said it would be a positive integer

    //short and long
    short short_var {-32768}; // 2 bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    std::cout << "Short variable: " << short_var << " size: " << sizeof(short_var) << std::endl;
    std::cout << "Short int: " << short_int << " size: " << sizeof(short_int) << std::endl;
    std::cout << "Signed short: " << signed_short << " size: " << sizeof(signed_short) << std::endl;
    std::cout << "Signed short int: " << signed_short_int << " size: " << sizeof(signed_short_int) << std::endl;
    std::cout << "Unsigend short int : " << unsigned_short_int << " size: " << sizeof(unsigned_short_int) << std::endl;




    int int_var {55}; // 4 bytes
    signed signed_var {66}; 
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    std::cout << "Int variable: " << int_var << " size: " << sizeof(int_var) << std::endl;
    std::cout << "Sigend variable: " << signed_var << " size: " << sizeof(signed_var) << std::endl;
    std::cout << "Signed int: " << signed_int << " size: " << sizeof(signed_int) << std::endl;
    std::cout << "Unsigned int: " << unsigned_int << " size: " << sizeof(unsigned_int) << std::endl;




    long long_var {88}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    std::cout << "long variable: " << long_var << " size: " << sizeof(long_var) << std::endl;
    std::cout << "long int : " << long_int << " size: " << sizeof(long_int) << std::endl;
    std::cout << "Signed long: " << signed_long << " size: " << sizeof(signed_long) << std::endl;
    std::cout << "signed long int: " << signed_long_int << " size: " << sizeof(signed_long_int) << std::endl;
    std::cout << "Unsigned long int: " << unsigned_long_int<< " size: " << sizeof(unsigned_long_int) << std::endl;




    long long long_long {888}; // 8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout << "long long variable: " << long_long << " size: " << sizeof(long_long) << std::endl;
    std::cout << "Long long int : " << long_long_int << " size: " << sizeof(long_long_int) << std::endl;
    std::cout << "Signed long long: " << signed_long_long << " size: " << sizeof(signed_long_long) << std::endl;
    std::cout << "signed long long int: " << signed_long_long_int << " size: " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "Unsigned long long int: " << unsigned_long_long_int<< " size: " << sizeof(unsigned_long_long_int) << std::endl;

    return 0;

}