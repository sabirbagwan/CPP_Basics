#include <iostream>

int main(){
    
    // bool red_light {true};
    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go Through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is Green" << std::endl;
    }else{
        std::cout << "The light is not Green" << std::endl;
    }

    //size of 
    std::cout << "Sizeof(bool) : " << sizeof(bool) << std::endl;

    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    return 0;
}
