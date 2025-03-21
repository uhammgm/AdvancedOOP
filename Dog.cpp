#include "Dog.hpp"
#include <iostream>

Dog::Dog():breed("NaD"), name("N/A")
{
    std::cout << "\nDog Created! (Default)" << std::endl;
}

Dog::Dog(std::string breed, std::string name): breed(breed), name(name)
{
    std::cout << "\nDog Created! \nBreed = " << breed << "\nName = " << name;

}

void Dog::makeSound()
{
    std::cout << name << " goes woof!" << std::endl;
}
