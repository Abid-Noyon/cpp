#include <iostream>

int main(){

    //Braced initializers
    /*
    // If you do declare value of a int then variable may contain random garbage value . WARNING
    int elephant_count; 

    int lion_count{}; //Initializes with 0
    int dog_count{10}; //Initializes with 10
    int cat_count{15}; //Initializes with 15

    //can use expressions as initializer
    int domestic_animals { dog_count + cat_count };
    
    //
    // int new_number {doesnt_exist};

    // int narrowing_conversion {2.9}; compiler error

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count is: " << lion_count << std::endl;
    std::cout << "Dog count is: " << dog_count << std::endl;
    std::cout << "Cat count is: " << cat_count << std::endl;
    std::cout << "Domestic animal count is: " << domestic_animals << std::endl;
    
    */
    
    /*
    //funtional initialization 
    int apple_count (5);
    int orrange_count (10);

    int fruits_count ( apple_count + orrange_count );
    //int bad_initialization ( dosent_exist3 + dosent exits4 );

    //Information lost. Less safe than braccd initializer
    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count is: " << apple_count << std::endl;
    std::cout << "Orrange count is: " << orrange_count << std::endl;
    std::cout << "Fruits count is: " << fruits_count << std::endl;
    std::cout << "Narrowing conversion function is: " << narrowing_conversion_functional << std::endl;
    */
    
    //Funtional natation

    int bike_count = 4;
    int truck_count = 5;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehile count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion_assignment << std::endl;

    // Check the size with sizeof
    std::cout << "The size of int: " << sizeof(int) << std::endl;
    std::cout << "The size of truck cout is: " << sizeof(truck_count) <<std::endl;
    

    return 0;

}