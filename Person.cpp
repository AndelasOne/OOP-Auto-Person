//
// Created by Gm7Na on 11.05.2020.
//

#include "Person.h"
#include <iostream>
#include <utility>

void Person::greet(Person other) {
    std::cout   << _stringLookupTable.at(other.getNationality())<< " " << other.getName()
                << " my name is " << getName() << "." <<std::endl;
}

Person::Person(std::string name, Nationalities nationality):
               _name(std::move(name)), _nationality(nationality) {
    std::cout << "Hello, my name is " << getName() << std::endl;
}
Person::Person() {

}

const std::string &Person::getName() const {
    return _name;
}

const Nationalities &Person::getNationality() const {
    return _nationality;
}

Person::~Person() {
}




