#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>


//abstract class
class Animal {

    public:
        Animal();
        virtual void makeSound() = 0;
        virtual ~Animal();


};


#endif