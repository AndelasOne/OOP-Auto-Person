//
// Created by Gm7Na on 11.05.2020.
//

#ifndef OBJEKTORIENTIERUNG_1_PERSON_H
#define OBJEKTORIENTIERUNG_1_PERSON_H

#include "string"
#include "map"

enum struct Nationalities{de, en, it, es};


class Person {
public:

    Person(std::string name, Nationalities nationality);

    void greet(string other);
    const Nationalities &getNationality() const;
    const std::string &getName() const;

private:
    std::string _name;
    Nationalities _nationality;
    std::map<Nationalities , std::string> _stringLookupTable = {{Nationalities::de,"Hallo"},
                                                                {Nationalities::en,"Hi"},
                                                                {Nationalities::it, "Ciao"},
                                                                {Nationalities::es, "Hola"}};
};


#endif //OBJEKTORIENTIERUNG_1_PERSON_H
