#include <iostream>

#include "Dog.hpp"
#include "Car.cpp"



int main() {
    Car car1("Nissan", "Bart", 1978);
    Car car2("Tesla", "Aaron", 2018);
    Car car3("Toyota", "Tundra", 2000);

    std::cout << car1 << std::endl;
    std::cout << car1 + car2 << std::endl;
    std::cout << car3 << std::endl;

        Dog Hector;
        Dog fido("Boston Terrier", "Fido");
        fido.makeSound();



    

    return 0;
}

#ifndef CAR_HPP
#define CAR_HPP

#include <string>
#include <iostream>

// Forward declaration of the Car class
class Car;

#endif // CAR_HPP






