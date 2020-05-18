//
// Created by Gm7Na on 11.05.2020.
//

#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle(string name, const Pos &pos, unsigned int horsepower, unsigned int chairs, string color, unsigned int seat_number = 4) :
        _name(std::move(name)), _pos(pos), _horsepower(horsepower), _chairs(chairs), _color(std::move(color)), _seat_number(seat_number){
        cout << "I am the " << getName() << " with " << getHorsepower() << " PS." << endl;
};


void Vehicle::move(Pos to){
    cout    << "The Car " << getName() << " drove from (" << getPos().x <<"," << getPos().y
            << ") to ("<< to.x <<"," << to.y << ")." << endl;
    _pos = to;
}

unsigned int Vehicle::getHorsepower() const {
    return _horsepower;
}

const Pos &Vehicle::getPos() const {
    return _pos;
}

const string &Vehicle::getName() const {
    return _name;
}

unsigned int Vehicle::getChairs() const {
    return _chairs;
}

const string &Vehicle::getColor() const {
    return _color;
}

unsigned int Vehicle::getSeat_Number() const {
    return _seat_number;
}

void Vehicle::exit(int seat_number) {
    if(seat_number > _seat_number){
        cout << "The car has only " << _seat_number << " seats" << endl;
   }
    else if(seat_number > _seats.size()){
        cout << "Sorry, this seat is empty!" << endl;

    }
    else{
        //Hilfsvektor
        vector<Person> buffer;
        for(unsigned int i = 0; i < _seats.size(); i++){
            if(i != seat_number-1)
                buffer.push_back(_seats[i]);
            else
                cout << _seats[i].getName() << " left the car." << endl << "Cleaning program gets started." << endl;
        }
        _seats.clear();
        for(unsigned int i = 0; i < buffer.size(); i++)
            _seats.push_back(buffer[i]);
    }

}

void Vehicle::enter(Person person) {
    if(_seats.size() < _seat_number){
        cout << person.getName() << " enters the car and is sitting on seat " << _seats.size()+1 << "."<< endl;

        for(unsigned int i = 0; i < _seats.size(); i++){
            person.greet( _seats[i]);
        }
        _seats.push_back(person);
    }
    else
        cout << "No places left. " << person.getName() << " can't enter the car!"<<endl;
}





