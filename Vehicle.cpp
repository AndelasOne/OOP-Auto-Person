//
// Created by Gm7Na on 11.05.2020.
//

#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle(string name, const Pos &pos, unsigned int horsepower, unsigned int chairs, string color, unsigned int seat_number = 4) :
        _name(std::move(name)), _pos(pos), _horsepower(horsepower), _chairs(chairs), _color(std::move(color)), _seat_number(seat_number){

        this->_seats = new string[seat_number];
        for(int i=0; i<seat_number; i++){
            _seats[i]="";
        }

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
    seat_number = seat_number -1;
   if(_seats[seat_number]!=nullptr){
       cout << _seats[seat_number] << " left the car." << endl << "Cleaning program gets started." << endl;
       _seats[seat_number]=nullptr;
   }
   else
       cout << "Sorry, this seat is empty!" << endl;
}

void Vehicle::enter(Person person) {
    int index = 0;
    bool check = false;
    while(index < _seat_number && !check){
        if(_seats[index]==""){
            check = true;
            _seats[index]= person.getName();
        }
        else{
            index++;
        }
    }
    if(check)
        cout << person.getName() << " is sitting on seat " << index+1 << "."<< endl;
    else
        cout << "No places left." << endl;

    for(int i = 0; i< _seat_number; i++){
        if(i != index && _seats[i]!=""){
            person.greet(_seats[i]);
        }

    }
}





