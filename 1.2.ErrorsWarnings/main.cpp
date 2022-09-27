#include <iostream>

int main(){

    //compile time error if you forget to put semicolon at the last
    std::cout << "Hello World" << std::endl;
    
    //run time error
    int value = 8/0;
    std::cout << "value : " << std::endl;
    return 0;

}