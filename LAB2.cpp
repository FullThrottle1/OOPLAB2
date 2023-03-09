// LAB2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.cpp"
#include "Patient.cpp"
#include "Doctor.cpp"
#include "Surgery.cpp"

int main()
{
    std::cout << "Hello World!\n";
    Person stat = Person("Alex", "Alexberg");
    stat.sayName();

    Person* a = new Person();
    a->sayName();
    delete a;

    Patient* b = new Patient();
    Doctor* d = new Doctor("John", "Johnson", 5);

    d->sayName();
    b->sayIll();
    d->tryToTreatPatient(b);
    b->sayIll();
    delete b;
    delete d;

    Person* c = new Patient();
    delete c;

    Surgery* e = new Surgery();
    delete e;

}


