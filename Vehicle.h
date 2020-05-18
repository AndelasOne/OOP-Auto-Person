//
// Created by Andreas Weber on 11.05.2020.
//

#ifndef OBJEKTORIENTIERUNG_1_VEHICLE_H
#define OBJEKTORIENTIERUNG_1_VEHICLE_H
#include <string>
#include <vector>
#include "Struct.h"
#include "Person.h"

using namespace std;



class Vehicle {
public:
    Vehicle(string name, const Pos &pos, unsigned int horsepower, unsigned int chairs,
            string color, unsigned int seat_number);
    void move(Pos to);

    const string &getName() const;
    const string &getColor() const;
    const Pos &getPos() const;
    unsigned int getHorsepower() const;
    unsigned int getChairs() const;
    unsigned int getSeat_Number() const;
    void enter(Person person);
    void exit(int seat_number);

private:
    string _name;
    string _color;
    Pos _pos;
    unsigned int _horsepower;
    unsigned int _chairs;
    unsigned int _seat_number;
    vector<Person> _seats;
};


#endif //OBJEKTORIENTIERUNG_1_VEHICLE_H
