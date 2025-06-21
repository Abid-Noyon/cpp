#include <iostream>
#include <string>

int main(){
    
    std::cout << "Hello World! This is c++20" << std::endl;

    int age {22};
    std::cout << "My age is: " << age << std::endl;

    std::cerr << "Error! Something went wrong " << std::endl;

    std::clog << "Log message! Something goes wrong " << std::endl;

    /*
        
        //data input

    int age1;
    std::string name;

    std::cout << "Please enter your name and age: " << std::endl;

    std::cin >> name >> age1;
    // std::cin >> age1; 
    // you can use code to take date separately but you take data in a single line on the above

    std::cout << "Your name is " << name << " and you are " << age1 << " years old! " << std::endl;
    
    */

    //Date with spaces

    std::string full_name;
    int age3;

    std::cout << "Please type your full name and age " << std::endl;

    std:getline(std::cin, full_name);
    std::cin >> age3;

    std::cout << "Hello! " << full_name << " you are " << age3 << " years old!" << std::endl;


    return 0;
}