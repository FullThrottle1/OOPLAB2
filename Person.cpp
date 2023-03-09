#ifndef PERSON
#define PERSON

#include <iostream>
#include <string>

class Person {
protected:
	std::string name;
	std::string surname;

public:
	Person() {
		std::cout << "Person()\n";
		this->name = "Default Name";
		this->surname = "Default Surname";
	}

	Person(std::string name, std::string surname) {
		std::cout << "Person(name, surname)\n";
		this->name = name;
		this->surname = surname;
	}

	Person(const Person &person) {
		std::cout << "Person(Person &person)\n";
		this->name = person.name;
		this->surname = person.surname;
	}

	~Person() {
		std::cout << "~Person()\n";
	}

public:
	void sayName() {
		std::cout << "My name is " + name + " " + surname + "\n";
	}
};
#endif // PERSON