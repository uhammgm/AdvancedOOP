#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"


class Dog: public Animal
{
    protected:
        std::string breed;
        std::string name;
    public:
    Dog();
    Dog(std::string,std::string);
    void makeSound();
};

#endif