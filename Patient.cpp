#ifndef PATIENT
#define PATIENT

#include <iostream>
#include "Person.cpp"

class Patient: public Person {
protected:
	bool ill;
public:
	Patient() : Person() {
		std::cout << "Patient()\n";
		this->ill = true;
	}

	Patient(std::string name, std::string surname, bool isIll) : Person(name, surname) {
		std::cout << "Patient(name, surname)\n";
		this->ill = isIll;
	}

	Patient(const Patient &patient) {
		std::cout << "Patient(const Patient &patient)\n";
		this->name = patient.name;
		this->surname = patient.surname;
		this->ill = patient.ill;
	}

	~Patient() {
		std::cout << "~Patient()\n";
	}

	bool isIll() {
		return this->ill;
	}

	void setIll(bool ill) {
		this->ill = ill;
	}

	void sayIll() {
		determineIllOrNot();
	}

private:
	void determineIllOrNot() {
		if (ill)
		{
			std::cout << "I am ill\n";
		}
		else
		{
			std::cout << "I am not ill\n";
		}
	}
};
#endif // ! PATIENT