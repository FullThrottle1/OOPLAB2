#ifndef DOCTOR
#define DOCTOR

#include <iostream>
#include "Person.cpp"
#include "Patient.cpp"

class Doctor : public Person {
protected:
	int experience;
public:
	Doctor() : Person() {
		std::cout << "Doctor()\n";
		this->experience = 0;
	}

	Doctor(std::string name, std::string surname, int experience) : Person(name, surname) {
		std::cout << "Doctor(name, surname)\n";
		this->experience = experience;
	}

	Doctor(const Doctor &doctor) {
		std::cout << "Doctor(const Doctor &doctor)\n";
		this->name = doctor.name;
		this->surname = doctor.surname;
		this->experience = doctor.experience;
	}

	~Doctor() {
		std::cout << "~Doctor()\n";
	}

	void tryToTreatPatient(Patient *patient) {
		treatPatient(patient);
	}

private:
	void treatPatient(Patient *patient) {
		if (this->experience > 3)
		{
			patient->setIll(false);
		}
	}
};
#endif // !DOCTOR
