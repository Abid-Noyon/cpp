#include <iostream>

//this a addNumber function to use it latter on to add two numbers
int addNumbers( int first_param, int second_param ){
    int result = first_param + second_param;
    return result;
}

int main(){
    
    int first_number {5};
    int second_number {5};

    std::cout << "first number is: " << first_number << std::endl;
    std::cout << "second number is: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "The sum is: " << sum << std::endl;

    //directly use add number function
    sum = addNumbers(20,15);
    std::cout << "sum is : " << sum << std::endl;

    sum = addNumbers(50,60);
    std::cout << "The sum is: " << sum << std::endl;

    //addNumber function in cout line
    std::cout << "the sum is: " << addNumbers(100,50) << std::endl;


    return 0;
}