#include <iostream>

int main()
{

    // Compile time error like missing semicolon
    std::cout << "Hello Word!" << std::endl;

    // Run time error
    int value = 7 / 0;
    std::cout << "value : " << value << std::endl;

    return 0;
}