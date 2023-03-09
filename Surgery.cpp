#ifndef SURGERY
#define SURGERY

#include <iostream>
#include "Doctor.cpp"
#include "Patient.cpp"

class Surgery {
protected:
	Doctor* doctor;
	Patient* patient;

public:
	Surgery() {
		std::cout << "Surgery()\n";
		this->doctor = new Doctor();
		this->patient = new Patient();
	}

	Surgery(std::string name1, std::string surname1, int experience, std::string name2, std::string surname2, bool isIll) {
		std::cout << "Surgery(name1, surname1,  isIll, name2, surname2, experience)\n";
		this->doctor = new Doctor(name1, surname1, experience);
		this->patient = new Patient(name2, surname2, isIll);
	}

	Surgery(const Surgery& surgery) {
		std::cout << "Surgery(const Surgery &surgery)\n";
		this->doctor = new Doctor(*(surgery.doctor));
		this->patient = new Patient(*(surgery.patient));
	}

	~Surgery() {
		delete this->doctor;
		delete this->patient;
		std::cout << "~Surgery()\n";
	}

};
#endif // !SURGERY
