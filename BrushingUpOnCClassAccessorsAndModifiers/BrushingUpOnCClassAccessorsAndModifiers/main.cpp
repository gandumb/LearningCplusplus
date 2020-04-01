#include <iostream>
#include <string>
#include <vector>

//keyword(class) class name
class Person {
private: //can only be used within the class
	//variables
	std::string name;
	int age;
	bool female;
	std::string address;
	std::string profession;
	bool std;

	//functions

protected: //used for inheritance


public: //can be used outside the class
	//constructors and destructors
	Person();

	Person(std::string name, int age, bool female, std::string address, std::string profession, bool std) {
		std::cout << "Special Constructor" << std::endl;
		this->name = name;
		this->age = age;
		this->female = female;
		this->address = address;
		this->profession = profession;
		this->std = std;
	}

	~Person() {
		std::cout << "Destructors Called" << std::endl;
	}

	//accessors
	inline const std::string getName() const {
		return this->name;
	}

	//mutators
	inline void changeName(const std::string name) {
		this->name = name;
	}

	//other functions
	const std::string toString() const {
		std::string finalString = "";

		finalString = "Name: " + this->name + " / " + std::to_string(this->age) + "";

		return finalString;
	}

};

//Person Function Defintions
Person::Person(){
	std::cout << "I am the default constructor!" << "\n";
	this->name = "none";
	this->age = -1;
	this->female = false;
	this->address = "null";
	this->std = false;
}


int main() {
	Person me("Joshua Mo", 19, false, "2251 Goliad Circle", "Gamer", false);
	Person p2;

	std::cout << me.getName() << "\n";
	me.changeName("REeee");
	std::cout << me.getName() << "\n";

	std::cout << me.toString();

	//delete me;

	return 0;
}