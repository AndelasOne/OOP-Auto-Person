#include <iostream>
#include "Vehicle.h"
#include "Person.h"

int main() {
    Vehicle a("A Class", {4, 0}, 120, 4, "blue", 4);
    a.move({4, 5});

    Person p1("Philip", Nationalities::de);
    Person p2("Andi", Nationalities::en);
    a.enter(p1);
    a.enter(p2);
    a.exit(1);
    a.enter(p1);


    return 0;

}
