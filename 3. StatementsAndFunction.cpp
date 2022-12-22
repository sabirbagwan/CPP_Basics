#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;

}

int mulNumbers(int first_param, int second_param){

    int result = first_param * second_param;
    return result;
}


int main(){

    int first_number {3};
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int sum = first_number + second_number;

    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(13, 7);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(5, 87) << std::endl;

    std::cout << "Multiplication : " << mulNumbers(5, 8) << std::endl;


    return 0;

}
