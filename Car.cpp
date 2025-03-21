
#include <string>
#include <iostream>

class Car {
public:

    Car(std::string brand, std::string name, int year) {
        this->brand = brand;
        this->year = year;
        this->name = name;
    }

    Car(): brand("None"), name("NaB"), year(-1) {

    }
    std::string getBrand() {
        return this->brand;
    }

    int getYear() {
        return this->year;
    }

    void setBrand(std::string brand) {
        this->brand = brand;
    }

    void setYear(int year) {
        this->year = year;
    }

    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Brand: " << car.brand << std::endl << "Year: " << car.year << std::endl
           
           << "Name: " << car.name << std::endl;
        return os;
    }

    Car operator+(const Car& other) {
        return Car(this->brand + other.brand, this->name + other.name, this->year + other.year);
    }




private: 
    std::string brand;
    int year;
protected:
    std::string name;
    std::string getName() {
        return this->name;
    }

    void setName(std::string name) {
        this->name = name;
    }

};
