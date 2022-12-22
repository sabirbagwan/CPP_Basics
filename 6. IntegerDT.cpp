#include <iostream>

int main(){
    

    //Braced Initialisation

    int elephant_count;

    int lion_count {};

    int dog_count {10};

    int cat_count {15};

    int domesticated_animals {dog_count + cat_count};

    //int narrowing_conversion {2.9}; // This will give a copilation error

    std::cout << "Elephant count : " << elephant_count << std::endl;
    std::cout << "lion count : " << lion_count << std::endl;
    std::cout << "dog count : " << dog_count << std::endl;
    std::cout << "cat count : " << cat_count << std::endl;
    std::cout << "domesticated_animals count : " << domesticated_animals << std::endl;


       //Functional Initialization
   
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    //int bad_initialization ( doesnt_exist3 + doesnt_exist4 );
    //Information lost. less safe than braced initializers
    int narrowing_conversion_functional (2.9);
    
    std::cout << "Apple count : " << apple_count << std::endl;
    std::cout << "Orange count : " << orange_count << std::endl;
    std::cout << "Fruit count : " << fruit_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;//Will loose info
    


       //Assignment notation
    
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count +truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count : " << bike_count << std::endl;
    std::cout << "Truck count : " << truck_count << std::endl;
    std::cout << "Vehicle count : " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_assignment << std::endl;
    

    //Check the size with sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;

    return 0;
}
